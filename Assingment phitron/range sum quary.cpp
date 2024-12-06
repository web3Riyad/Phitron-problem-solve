#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int q,l,r;
    cin>>q;
    int a[n];
    int b[n];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }

    int sum=a[1];
    for(int i=1; i<=n; i++)
    {
        if(i==1)
            b[i]=a[i];
        else
        {
            sum=sum+a[i];
            b[i]=sum;
        }

    }
    for(int i=1; i<=q; i++)
    {
        cin>>l>>r;
        if(l==1)
            cout<<b[r]<<endl;
        else
        {
            int result=b[r]-b[l-1];
            cout<<result<<endl;
        }
    }
    for(int i=1; i<=n; i++)
    {
        cout<<b[i]<<" ";
    }


    return 0;

}
