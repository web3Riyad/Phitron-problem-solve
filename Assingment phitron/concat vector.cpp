#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a,b,c;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        b.push_back(x);
    }
    int p=2*n;
    int q=2*n-1;
    int j=0;
    for(int i=0; i<p;i++)
    {
        if(i<n)
        {
            cout<<b[i]<<" ";
        }
        else if(i>=n && i<q)
        {
            cout<<a[j]<<" ";
            j=j+1;
        }
        else
            cout<<a[j];
    }
    return 0;

}
