#include<bits/stdc++.h>
using namespace std;
const int N=1000;
int v[N];
int w[N];
int a[N][N];
int main()
{
    int n,wgt;
    cin>>n>>wgt;
    for(int i=0;i<n;i++)
    {
        cin>>w[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=wgt;j++)
        {
            if(i==0 || j==0)
                a[i][j]=0;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=wgt;j++)
        {
            if(w[i-1]<=j)
            {
                int op1=a[i-1][j-w[i-1]]+v[i-1];
                int op2=a[i-1][j];
                a[i][j]=max(op1,op2);
            }
            else
            {
                int op2=a[i-1][j];
                a[i][j]=op2;
            }
        }
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=wgt;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
