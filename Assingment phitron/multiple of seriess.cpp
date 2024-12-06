#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,n,p=1;
    cin>>x>>n;
    int r=0;
   int i=2;
   while(i<=n)
    {
        for(int j=0; j<i; j++)
        {
            p=p*x;
        }
        r=r+p;
        p=1;
        i=i+2;
    }

    cout<<r;
    return 0;
}
