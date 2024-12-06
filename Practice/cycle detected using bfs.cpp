#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
bool vis[N];
vector<int> adj[N];
int parentArray[N];
bool bfs(int src)
{
    queue<int>q;
    vis[src] = true;
    q.push(src);
    while(!q.empty())
    {
        int parent= q.front();
            q.pop();
        for (int child : adj[parent])
        {
            if (vis[child] == true  && child != parentArray[parent])
            {
                return true;
            }
            if (vis[child] == false)
            {
                parentArray[child] = parent;
                vis[child]=true;
                q.push(child);
            }
        }
    }
    return false;
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(parentArray, -1, sizeof(parentArray));
    bool ans = false;
    int flag=0;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            ans= bfs(i);
            if(ans)
                flag=1;
        }
    }
     if (flag==1)
            cout << "Cycle detected"<<endl;
        else
            cout << "Cycle not detected"<<endl;

    return 0;
}
/*0 2
1 5
2 3
4 5*/

