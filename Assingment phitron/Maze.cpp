#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
char a[N][N];
int par[N];
 int n,m;
 bool vis[N][N];
 pair<int,int>parent[N][N];
vector<pair<int,int>>v={{0,1},{0,-1},{1,0},{-1,0}};
bool validity(int si,int sj)
{
    if(si<0 || si>=n || sj<0 || sj>=m || a[si][sj]=='#')
        return false;
    return true;
}
void bfs(int si,int sj)
{
    vis[si][sj]=true;
    queue<pair<int,int>>q;
    q.push({si,sj});
    vector<pair<int,int>>v;
    while(!q.empty())
    {
        pair<int,int>par=q.front();
        q.pop();
        int ci=par.first;
        int cj=par.second;
        if(a[ci][cj]=='D')
        {
            while(1)
            {
                pair<int,int> point=parent[ci][cj];
                ci=point.first;
                cj=point.second;
                if(a[ci][cj]=='R')
                    break;
                a[ci][cj]='X';
            }
        }
        for(int i=0;i<4;i++)
        {
            int newci=ci+v[i].first;
            int newcj=cj+v[i].second;
            if(validity(newci,newcj)==true && vis[newci][newcj]==false)
            {
                vis[newci][newcj]=true;
                q.push({newci,newcj});
                parent[newci][newcj]={ci,cj};
            }
        }
    }
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    memset(par,-1,sizeof(par));
    memset(vis,false,sizeof(vis));
    int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='R')
            {
                bfs(i,j);
            }
        }
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
