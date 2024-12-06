#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=100;
ll a[N];
ll fibo(int n)
{
    if(n==1 || n==0)
        return n;
    if(a[n]!=-1)
        return a[n];

    int ans=fibo(n-1)+ fibo(n-2);
    a[n]=ans;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    memset(a,-1,sizeof(a));
    ll result=fibo(n);
    cout<<result;
    return 0;
}
