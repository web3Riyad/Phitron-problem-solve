#include<bits/stdc++.h>
using namespace std;
bool visit[1005];
vector<int>v[1005];
int bfs(int x,int y)
{
    queue<int>q;
    q.push(x);
    visit[x]=true;
    while(!q.empty())
    {
        int s=q.front();
        q.pop();

        if(s==y)
        {
            return 1;
        }
        for(int child:v[x])
        {
            if(visit[child]==false)
            {
                q.push(child);
                visit[child]=true;
            }
        }
    }
    return -1;
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
    }
    int q;
    cin>>q;
    while(q--)
    {
        memset(visit,false,sizeof(visit));
        int x,y;
        cin>>x>>y;
        int ans=bfs(x,y);
        if(ans==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
