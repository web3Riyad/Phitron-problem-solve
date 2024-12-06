#include<bits/stdc++.h>
using namespace std;
const int N=100;
int a[N];
int dp[N][N];
int count_subset_sum(int n,int sum)
{
    if(n==0)
    {
        if(sum==0)
            return 1;
        else
            return 0;
    }
    if(dp[n][sum]!=-1)
        return dp[n][sum];
    if(a[n-1]<=sum)
    {
        int nibo=count_subset_sum(n-1,sum-a[n-1]);
        int nibona=count_subset_sum(n-1,sum);
        return dp[n][sum]= nibo+nibona;
    }
    else
    {
        int nibona=count_subset_sum(n-1,sum);
        return dp[n][sum]= nibona;
    }
}
int main()
{
    int n,sum;
    cin>>n>>sum;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    memset(dp,-1,sizeof(dp));
    int count_subset =count_subset_sum(n,sum);
    cout<<count_subset;
    return 0;
}
