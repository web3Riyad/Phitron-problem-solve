#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=1e3+5;
char a[N][N];
bool vis[N][N];
vector<pair<int,int>>v= {{0,1},{0,-1},{1,0},{-1,0}};
bool vality(int si,int sj)
{
    if(si<0 || si>=n || sj<0 || sj>=m || a[si][sj]=='-')
        return false;
    return true;
}
int bfs(int si,int sj)
{
    vis[si][sj]=true;
    queue<pair<int,int>>q;
    q.push({si,sj});
    int cnt=1;
    while(!q.empty())
    {
        pair<int,int>par=q.front();
        q.pop();
        int ci=par.first;
        int cj=par.second;
        for(int i=0; i<4; i++)
        {
            int newci=ci+v[i].first;
            int newcj=cj+v[i].second;
            if(vality(newci,newcj) && vis[newci][newcj]==false)
            {
                q.push({newci,newcj});
                vis[newci][newcj]=true;
                cnt++;
            }
        }
    }
    return cnt;
}
int main()
{
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
    memset(vis,false,sizeof(vis));
    int mn=INT_MAX;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a[i][j]=='.' && vis[i][j]==false)
            {
                int emt=bfs(i,j);
                mn=min(mn,emt);
            }
        }
    }
    if(mn==INT_MAX)
        cout<<-1;
    else
        cout<<mn;
    return 0;
}
