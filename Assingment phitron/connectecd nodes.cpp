#include<bits/stdc++.h>
using namespace std;
vector<int>v[1005];
int main()
{
    int n,e;
    cin>>n>>e;
    vector<int>v2;
    while(e--)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        v2=v[x];
        sort(v2.begin(),v2.end(),greater<int>());
        for(int child:v2)
        {
            cout<<child<<" ";
        }
        cout<<endl;
    }
    return 0;
}

