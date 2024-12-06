#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
int mark[N];
int dp[N][N];
bool wish_mark(int n,int current,int target)
{
    if(current==target)
        return true;
    if(current>target)
        return false;
    if(n==0)
        return false;
    if(dp[current][target]!=-1)
        return dp[current][target];
    return dp[current][target]= (wish_mark(n-1,current+mark[n-1],target) || wish_mark(n-1,current,target));
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,m;
        cin>>n>>m;
        for(int i=0; i<n; i++)
        {
            cin>>mark[i];
        }
        memset(dp,-1,sizeof(dp));
        bool wish=wish_mark(n,m,1000);
        if(wish)
            cout<<"YES";
        else
            cout<<"NO";
        if(t>0)
            cout<<endl;
    }
    return 0;

}
