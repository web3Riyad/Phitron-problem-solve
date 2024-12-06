#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
const int E=1e6+5;
int path[N];
int pathsize[N];
void dsu_initialize(int n)
{
    for(int i=0; i<=n; i++)
    {
        path[i]=-1;
        pathsize[i]=1;
    }
}
int dsu_find(int node)
{
    if(path[node]==-1)
        return node;
    int leader=dsu_find(path[node]);
    path[node]=leader;
    return leader;
}
void dsu_union(int nodeA,int nodeB)
{
    int leaderA=dsu_find(nodeA);
    int leaderB=dsu_find(nodeB);
    if(pathsize[leaderA]>pathsize[leaderB])
    {
        path[leaderB]=leaderA;
        pathsize[leaderA]+=pathsize[leaderB];
    }
    else
    {
        path[leaderA]=leaderB;
        pathsize[leaderB]+=pathsize[leaderA];
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    dsu_initialize(n);
    int cnt=0;
    while(e--)
    {
        int x,y;
        cin>>x>>y;
        int leaderA=dsu_find(x);
        int leaderB=dsu_find(y);
        if(leaderA==leaderB)
            cnt++;
        else
            dsu_union(x,y);
    }
    cout<<cnt;
    return 0;
}
