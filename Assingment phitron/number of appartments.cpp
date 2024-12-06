#include<bits/stdc++.h>
using namespace std;
char a[1000][1000];
bool visit[1000][1000];
int n,m;
vector<pair<int,int>>v= {{0,1},{0,-1},{1,0},{-1,0}};
vector<int>rm;
bool validity(int i,int j)
{
    if(i<0 || i>=n || j<0 || j>=m)
        return false;
    else return true;
}
void bfs(int row,int col)
{
    queue<pair<int,int>>q;
    q.push({row,col});
    visit[row][col]=true;
    int room=1;
    while(!q.empty())
    {
        pair<int,int> par=q.front();
        q.pop();
        int rw=par.first;
        int cl=par.second;
        for(int i=0; i<4; i++)
        {
            int curi=rw+v[i].first;
            int curj=cl+v[i].second;
            if(validity(curi,curj)==true && visit[curi][curj]==false)
            {
                if(a[curi][curj]=='.')
                {
                    q.push({curi,curj});
                    visit[curi][curj]=true;
                    room=room+1;
                }
            }
        }
    }
    rm.push_back(room);
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
    int cnt=0;
    memset(visit,false,sizeof(visit));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a[i][j]=='.' && visit[i][j]==false)
            {
                cnt=cnt+1;
                bfs(i,j);
            }

        }
    }
    sort(rm.begin(),rm.end());
    if(cnt==0)
        cout<<"0";
    else
    {
        for(int child:rm)
        {
            cout<<child<<" ";
        }
    }
    return 0;

}

