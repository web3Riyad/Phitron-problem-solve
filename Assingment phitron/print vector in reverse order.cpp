#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n;i++)
    {
        int s;
        cin>>s;
        v.push_back(s);
    }
    int flag=0;

    for(int i=n-1; i>=0; i--)
    {
        if(flag==0)
        {
            cout<<v[i];
            flag=1;
        }
        else
            cout<<" "<<v[i];
    }
    return 0;
}
