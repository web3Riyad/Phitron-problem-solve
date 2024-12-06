#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector<pair<int,int>>v[1001];
ll dis[1001];
class cmp
{
public:
    bool operator()(pair<int,int>& a,pair<int,int>& b)
    {
        if(a.second!=b.second)
            return a.second>b.second;
    }
};
void shortestDistance(int src)
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
            for(pair<int,int>child:v[node])
            {
                int newnode=child.first;
                int newcost=child.second;
                if(cost+newcost<dis[newnode])
                {
                    pq.push({newnode,cost+newcost});
                    dis[newnode]=cost+newcost;
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
        int x,y,cost;
        cin>>x>>y>>cost;
        v[x].push_back({y,cost});
    }
    for(int i=1;i<=n;i++)
    {
        dis[i]=INT_MAX;
    }
    int src;
    cin>>src;
    shortestDistance(src);
   int t;
   cin>>t;
   while(t--)
   {
       int x,y;
       cin>>x>>y;
       if(dis[x]<=y)
        cout<<"YES";
       else cout<<"NO";
       if(t>0)
        cout<<endl;
   }
    return 0;
}
