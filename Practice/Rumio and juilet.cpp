#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>v[N];
bool visit[N];
int bfs(int src,int dis)
{
    queue<pair<int,int>>q;
    q.push({src,0});
    visit[src]=0;
    while(!q.empty())
    {
        pair<int,int>par=q.front();
        q.pop();
        int node=par.first;
        int level=par.second;
        if(node==dis)
            return level;
        for(int child:v[node])
        {
            if(visit[child]==false)
            {
                q.push({child,level+1});
                visit[child]=true;
            }
        }

    }
    return -1;
}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    memset(visit,false,sizeof(visit));
    int x,y,k;
    cin>>x>>y>>k;
    int level=bfs(x,y);
    if(level!=-1)
    {
        if(ceil((float)level/2)<=k)
            cout<<"YES";
        else cout<<"NO";
    }
    else cout<<"NO";
    return 0;
}
