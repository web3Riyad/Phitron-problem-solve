#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<pair<int,int>>v[N];
long long dis[N];
int parent[N];
class cmp
{
public:
    bool operator()(pair<int,int> A,pair<int,int> B)
    {
        return A.second>B.second;
    }
};
void dijkstra(int src)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
    pq.push({src,0});
    dis[src]=0;
    while(!pq.empty())
    {
        pair<int,int>par=pq.top();
        pq.pop();
        int node=par.first;
        int cost=par.second;
        for(auto child:v[node])
        {
            int newnode=child.first;
            int newcost=child.second;
            if(dis[node]<INT_MAX && (cost+newcost)<dis[newnode])
            {
                dis[newnode]=cost+newcost;
                pq.push({newnode,newcost+cost});
                parent[newnode]=node;
            }
        }

    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int x,y,w;
        cin>>x>>y>>w;
        v[x].push_back({y,w});
        v[y].push_back({x,w});
    }
    for(int i=1;i<=n;i++)
    {
        dis[i]=INT_MAX;
        parent[i]=-1;
    }
    dijkstra(1);
    if(dis[n]==INT_MAX)
        cout<<-1;
    else
    {
        vector<int>path;
        int x=n;
        while(x!=-1)
        {
            path.push_back(x);
            x=parent[x];
        }
        reverse(path.begin(),path.end());
        for(int p:path)
        {
            cout<<p<<" ";
        }
    }

    return 0;
}
