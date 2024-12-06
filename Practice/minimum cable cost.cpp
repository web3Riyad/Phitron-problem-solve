#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int u,v,w;
    node(int u,int v,int w)
    {
        this->u=u;
        this->v=v;
        this->w=w;
    }
};
vector<node>v;
int a[100];
int dsusize[100];
void dsuInitialize(int n)
{
    for(int i=0; i<n; i++)
    {
        a[i]=-1;
    }
}
int dsuFind(int node)
{
    if(a[node]==-1)
        return node;
        int leader= dsuFind(a[node]);
        a[node]=leader;
    return leader;
}
void dsuUnion(int nodeA,int nodeB)
{
    int leaderA=dsuFind(nodeA);
    int leaderB=dsuFind(nodeB);
    if(dsusize[nodeB]>dsusize[nodeA])
    {
        a[nodeA]=nodeB;
        dsusize[leaderB]+=dsusize[leaderA];
    }
    else
    {
        a[nodeB]=nodeA;
        dsusize[leaderA]+=dsusize[leaderB];
    }
}
bool cmp(node a,node b)
{
    return a.w<b.w;
}

int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int x,y,w;
        cin>>x>>y>>w;
        v.push_back(node{x,y,w});
    }
    sort(v.begin(),v.end(),cmp);
    memset(dsusize,1,sizeof(dsusize));
    dsuInitialize(n);
    int cost=0;
    for(node child:v)
    {
        int u=child.u;
        int v=child.v;
        int w=child.w;
        int leaderA=dsuFind(u);
        int leaderB=dsuFind(v);
        if(leaderA==leaderB)
            continue;
        else
        {
            dsuUnion(leaderA,leaderB);
            cost+=w;
        }
    }
    cout<<cost;
    return 0;
}
