#include<bits/stdc++.h>
using namespace std;
const int N=100;
int w[N];
int v[N];
int dp[N][N];
int knapsack(int n,int wgt)
{
    if(n==0 || wgt==0)
        return 0;

    if(dp[n][wgt]!=-1)
        return dp[n][wgt];

    if(w[n]<=wgt)
    {
        int op1=knapsack(n-1,wgt-w[n])+v[n];
        int op2=knapsack(n-1,wgt);
        return dp[n][wgt]= max(op1,op2);
    }
    else
    {
        int op=knapsack(n-1,wgt);
        return dp[n][wgt]= op;
    }
}
int main()
{
    int n,wgt;
    cin>>n>>wgt;
    for(int i=1; i<=n; i++)
    {
        cin>>w[i];
         cin>>v[i];
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=wgt;j++)
        {
            dp[i][j]=-1;
        }
    }
    int result= knapsack(n,wgt);
    cout<<result;
    return 0;
}
