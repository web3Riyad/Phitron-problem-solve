#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==0)
        return 1;
    int l=fact(n-1);
    int ans=l*n;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int ans= fact(n);
    cout<<ans;
    return 0;
}
