#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p;
    cin>>p;
    for(int t=0;t<p;t++ )
    {

    int n;
    cin>>n;
    int a[n];
    int sum[n];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n-1; i++)
    {
        for(int j=2; j<=n; j++)
        {
            sum[i]=a[i]+a[j]+j-i;

        }
    }
    int min_sum=sum[0];
    for(int i=0; i<n; i++)
    {
        if(sum[i]<min_sum)
        {
           min_sum=sum[i] ;
        }
    }
    cout<<min_sum;
    printf("\n");
    }

    return 0;
}
