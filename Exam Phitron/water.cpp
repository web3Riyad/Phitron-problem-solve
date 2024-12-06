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
        ll a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        pair<ll,int> p= {a[0],0};
        ll mx=INT_MIN;
        for(int i=0; i<n; i++)
        {
            if(a[i]>mx)
            {
                mx=a[i];
                p.first=a[i];
                p.second=i;
            }
        }
        pair<ll,int>p2= {a[0],0};
        ll mx2=INT_MIN;
        for(int i=0; i<n; i++)
        {
            if(a[i]<p.first &&  a[i]>mx2)
            {
                mx2=a[i];
                p2.first=a[i];
                p2.second=i;
            }
        }

        cout<<min(p.second,p2.second)<<" "<<max(p.second,p2.second);
        if(t>0)
            cout<<endl;
    }
    return 0;
}
