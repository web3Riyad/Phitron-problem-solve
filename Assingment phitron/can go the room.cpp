#include<bits/stdc++.h>
using namespace std;
char a[1000][1000];
bool visit[1000][1000];
int n,m;
int flag=0;
vector<pair<int,int>>v={{0,1},{0,-1},{1,0},{-1,0}};
bool validity(int i,int j)
{
    if(i<0 || i>=n || j<0 || j>=m)
        return false;
    else return true;
}
void dfs(int row,int col)
{
    visit[row][col]=true;
    if(a[row][col]=='B')
    {
      flag=1;
    }

    for(int i=0; i<4;i++)
    {
        int curi=row+v[i].first;
        int curj=col+v[i].second;
        if(validity(curi,curj)==true && visit[curi][curj]==false)
           {
               if(a[curi][curj]=='.' || a[curi][curj]=='B')
                dfs(curi,curj);
           }
    }
}
int main()
{

    cin>>n>>m;
    getchar();
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
    memset(visit,false,sizeof(visit));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a[i][j]=='A')
                {
                    dfs(i,j);
                }

        }
    }
    if(flag==1)
        cout<<"YES"<<endl;

    else cout<<"NO"<<endl;
    return 0;

}
