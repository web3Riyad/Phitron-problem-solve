#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll dis[1001];
class Edge
{
public:
    int u, v, c;
    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

int main()
{
    int n,e;
    vector<Edge>v;

    cin>>n>>e;
    while(e--)
    {
        int x,y,cost;
        cin>>x>>y>>cost;
       v.push_back(Edge(x,y,cost));
    }
    for(int i=1;i<=n;i++)
    {
        dis[i]=INT_MAX;
    }
    int src;
    cin>>src;
    dis[src]=0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (Edge ed :v)
        {
            int u, v, c;
            u = ed.u;
            v = ed.v;
            c = ed.c;
            if (dis[u] < INT_MAX && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }
    int flag=0;
      for (Edge ed : v)
        {
            int u, v, c;
            u = ed.u;
            v = ed.v;
            c = ed.c;
            if (dis[u] < INT_MAX && dis[u] + c < dis[v])
            {
                int flag=1;
            }
        }
   int t;
   cin>>t;
   while(t--)
   {
       int x;
       cin>>x;
       if(flag==1)
       {
           cout<<"Negative Cycle Detected";
       }
      else if(dis[x]<INT_MAX)
        cout<<dis[x];
      else
        cout<<"Not Possible";
      if(t>0)
        cout<<endl;
   }
    return 0;
}

