#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        char a[n+1][m+1];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>a[i][j];
            }
        }
        vector<pair<int,int>>v;
         for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(a[i][j]=='#')
                {
                    v.push_back({i,j});
                }
            }
        }
        int sz=v.size()-1;
        int mid=sz/2;
        cout<<v[mid].first<<" "<<v[mid].second;

        if(t>0)
            cout<<endl;
    }
    return 0;
}


