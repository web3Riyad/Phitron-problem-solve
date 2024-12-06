#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int l=0;
        int r=n-1;
        int mid=(l+r)/2;


        if(a[mid]==a[0]  &&  a[mid]==a[n-1])
        {
            cout<<"NO";
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if(i==mid)
                    a[i]='B';
                else
                    a[i]='R';
            }
            cout<<"YES"<<endl;
            for(int i=0; i<n; i++)
            {
                cout<<a[i];
            }
        }

        if(t>0)
            cout<<endl;
    }
    return 0;
}
