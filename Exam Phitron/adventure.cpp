#include<bits/stdc++.h>
using namespace std;
const int N=1002;
int w[N];
int v[N];
int dp[N][N];
int maxvalue(int n,int wgt)
{
    if(n==0)
        return 0;
    if(dp[n][wgt]!=-1)
        return dp[n][wgt];
    if(w[n-1]<=wgt)
    {
        int op1=maxvalue(n-1,wgt-w[n-1])+v[n-1];
        int  op2=maxvalue(n-1,wgt);
        return dp[n][wgt]= max(op1,op2);
    }
    else
    {
        int  op2=maxvalue(n-1,wgt);
        return dp[n][wgt]= op2;
    }
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,wgt;
        cin>>n>>wgt;
        for(int i=0; i<n; i++)
        {
            cin>>w[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        memset(dp,-1,sizeof(dp));
        int result=maxvalue(n,wgt);
        cout<<result;
        if(T>0)
            cout<<endl;
    }
    return 0;
}
