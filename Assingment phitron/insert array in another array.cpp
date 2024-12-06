#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int m;
    cin>>m;
    int a[m];
    for(int j=0; j<m; j++)
    {
        cin>>a[j];
    }

    int pos;
    cin>>pos;
    v.insert(v.begin()+pos,a,a+m);
    int flag=0;
    for(int p:v)
    {
        if(flag==0)
        {
            flag=1;
            cout<<p;
        }

        else
            cout<<" "<<p;
    }
    return 0;
}
