#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0; i<n ; i++)
    {
        cin>>a[i];
    }
    int flag=0;
    for(int i=n-1; i>=0; i--)
    {
        if(flag=0)
        {
            cout<<a[i];
            flag=1;
        }
        else
        {
            cout<<" "<<a[i];
        }
    }
    return 0;
}
