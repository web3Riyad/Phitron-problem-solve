#include<bits/stdc++.h>
using namespace std;
const int N=100;
int a[N];
int dp[N][N];
bool count_sum(int n,int sum)
{
    if(n==0)
    {
        if(sum==0)
            return true;
        else return false;
    }
    if(dp[n][sum]!=-1)
        return dp[n][sum];
    if(a[n-1]<=sum)
    {
        bool nibo=count_sum(n-1,sum-a[n-1]);
        bool  nibona=count_sum(n-1,sum);
        return dp[n][sum]= (nibo || nibona);
    }
    else
    {
         bool  nibona=count_sum(n-1,sum);
         return dp[n][sum]= nibona;
    }
}
int main()
{
    int n;
    cin>>n;
    int s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    memset(dp,-1,sizeof(dp));
    if(s%2==0)
    {
        int need_sum=s/2;
        bool ans=count_sum(n,need_sum);
        if(ans)
            cout<<"YES";
        else cout<<"NO";
    }
    else
        cout<<"NO";
    return 0;
}
