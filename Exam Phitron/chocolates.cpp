#include<bits/stdc++.h>
using namespace std;
const int N=1e3+3;
int cho[N];
int  dp[N][N];
int make_equal(int n,int sum)
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
    if(cho[n-1]<=sum)
    {
        return dp[n][sum]= ( make_equal(n-1,sum-cho[n-1]) || make_equal(n-1,sum) );
    }
    else
    {
        return   dp[n][sum]=  make_equal(n-1,sum);
    }
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>cho[i];
            sum+=cho[i];
        }
        if(sum%2!=0)
            cout<<"NO";
        else
        {
            memset(dp,-1,sizeof(dp));
            int equal_cho=sum/2;
            int resul=make_equal(n,equal_cho);
            if(resul)
                cout<<"YES";
            else
                cout<<"NO";
        }
        if(T>0)
            cout<<endl;
    }
    return 0;

}
