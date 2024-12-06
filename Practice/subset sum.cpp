#include<bits/stdc++.h>
using namespace std;
const int N=100;
int a[N];
int dp[N][N];
bool subset(int n,int sum)
{
    if(n==0)
    {
        if(sum==0)
            return true;
        else
            return false;
    }
    if(dp[n][sum]!=-1)
        return dp[n][sum];
    if(a[n]<=sum)
    {
        bool nibo=subset(n-1,sum-a[n]);
        bool nibona=subset(n-1,sum);
        return dp[n][sum]= (nibo || nibona);
    }
    else
    {
        bool nibona=subset(n-1,sum);
        return dp[n][sum]= nibona;
    }
}
int main()
{
    int n,sum;
    cin>>n>>sum;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    memset(dp,-1,sizeof(dp));
    bool ans=subset(n-1,sum);
    if(ans)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
