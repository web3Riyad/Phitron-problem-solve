#include<bits/stdc++.h>
using namespace std;
vector<int>v[100];
bool visit[100];
int parent[100];
bool dfs(int par)
{
    visit[par]=true;
    bool ans=false;
    for(int child:v[par])
    {
        if(visit[child]==true && child!=parent[par])
        {
            return true;
        }
        if(visit[child]==false)
        {
            parent[child]=par;
            ans=dfs(child);
        }
    }
    return ans;
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
    bool ans;
    for(int i=0;i<n;i++)
    {
        if(visit[i]==false)
           ans= dfs(i);
    }
    if(ans==true)
        cout<<"Cycle detected"<<endl;
    else cout<<"Not detected"<<endl;
    return 0;
}
/*0 2
0 4
0 5
1 4
1 5
2 3
2 4
4 5*/
/*0 2
0 4
1 5
2 3
2 4
4 5*/
