#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    ll dis[n+1][n+1];
    const ll maxnum=1e10;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==j)
                dis[i][j]=0;
            else
                dis[i][j]=maxnum;
        }
    }
    while(e--)
    {
        int x,y,cost;
        cin>>x>>y>>cost;
        if(dis[x][y]>cost)
            dis[x][y]=cost;
    }
    for(int k=1; k<=n; k++)
    {

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                    if(dis[i][k]+dis[k][j]<dis[i][j])
                    {
                        dis[i][j]=dis[i][k]+dis[k][j];
                    }
            }
        }
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        if(dis[x][y]>=maxnum)
            cout<<-1;
        else
            cout<<dis[x][y];
        if(q>0)
            cout<<endl;
    }
    return 0;
}


