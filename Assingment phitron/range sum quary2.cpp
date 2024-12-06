#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    int b[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0; i<n; i++)
    {
       sum=sum+a[i] ;
       b[i]=sum;
    }

    while(q--)
    {
        int l,r;
        cin>>l>>r;
        if(l==1)
        {
            cout<<b[r-1]<<endl;
        }
        else
        {

        l--;
        r--;
        int ans=b[r]-b[l-1];
        cout<<ans<<endl;
        }

    }
    return 0;
}
