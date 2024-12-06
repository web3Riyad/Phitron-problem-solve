#include<bits/stdc++.h>
using namespace std;
int di,dj;
bool visit[1001][1001];
int n,m;
vector<pair<int,int>>v= {{1,2},{1,-2},{-1,2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}};

class node
{
public:
    int x,y,level;
    node(int x,int y, int level)
    {
        this->x=x;
        this->y=y;
        this->level=level;
    }
};
bool validity(int si,int sj)
{
    if(si<0 || si>=n || sj<0 || sj>m)
        return false;
    else
        return true;
}
int bfs(int si,int sj)
{
    visit[si][sj]=true;
    queue<node>q;
    q.push(node{si,sj,0});
    while(!q.empty())
    {
        node par=q.front();
        q.pop();
        int ki=par.x;
        int kj=par.y;
        int lvl=par.level;

        if(ki==di && kj==dj)
            return lvl;

        for(int i=0; i<8; i++)
        {
            int newki=ki+v[i].first;
            int newkj=kj+v[i].second;
            if(validity(newki,newkj)== true && visit[newki][newkj]==false)
            {
                q.push(node{newki,newkj,lvl+1});
                visit[newki][newkj]=true;

            }
        }
    }
    return -1;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(visit,false,sizeof(visit));
        cin>>n>>m;
        int si,sj;
        cin>>si>>sj;
        cin>>di>>dj;
        int ans=bfs(si,sj);
        cout<<ans;
        if(t>0)
            cout<<endl;
    }
    return 0;
}
