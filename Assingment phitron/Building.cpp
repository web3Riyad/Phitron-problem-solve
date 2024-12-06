#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=1e5+5;
int parent[N];
int pathsize[N];
class node
{
public:
    int x,y;
    ll w;
    node(int x,int y,ll w)
    {
        this->x=x;
        this->y=y;
        this->w=w;
    }
};
vector<node>v;
bool cmp(node A,node B)
{
    return A.w<B.w;
}
void dsu_initialize(int n)
{
    for(int i=1;i<=n;i++)
    {
        parent[i]=-1;
        pathsize[i]=1;
    }
}
int dsu_find(int node)
{
    if(parent[node]==-1)
        return node;
    int leader=dsu_find(parent[node]);
    parent[node]=leader;
    return leader;
}
void dsu_union(int nodeA,int nodeB)
{
    int leaderA=dsu_find(nodeA);
    int leaderB=dsu_find(nodeB);
    if(pathsize[leaderA]>pathsize[leaderB])
    {
        parent[leaderB]=leaderA;
        pathsize[leaderA]+=pathsize[leaderB];
    }
    else
     {
        parent[leaderA]=leaderB;
        pathsize[leaderB]+=pathsize[leaderA];
    }

}
int main()
{
    int n,e;
    cin>>n>>e;
    dsu_initialize(n);
    ll totalCost=0;
    while(e--)
    {
        int x,y,w;
        cin>>x>>y>>w;
        v.push_back(node(x,y,w));
    }
    sort(v.begin(),v.end(),cmp);
    for(node child:v)
    {
        int x=child.x;
        int y=child.y;
        ll w=child.w;
        int leaderA=dsu_find(x);
        int leaderB=dsu_find(y);
        if(leaderA!=leaderB)
        {
            totalCost+=w;
            dsu_union(x,y);
        }
    }
    int lead=dsu_find(1);
    int flag=0;
    for(int i=2;i<=n;i++)
    {
        if(dsu_find(i)!=lead)
            flag=1;
    }
    if(flag==1)
        cout<<-1;
    else
        cout<<totalCost;
    return 0;
}
