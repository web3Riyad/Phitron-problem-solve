#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    for(int j=0; j<x; j++)
    {
        int n,even=0,odd=0,dif;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            {
                cin>>a[i];
            }
        if(n%2!=0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if(a[i]%2==0)
                    even++;
                else
                    odd++;
            }
            int mid=n/2;
            if(even==odd)
                cout<<"0"<<endl;
            else if(even>odd)
            {
                dif=even-mid;
                cout<<dif<<endl;
            }
            else if(odd>even)
            {
                dif=odd-mid;
                cout<<dif<<endl;
            }
        }
    }
    return 0;
}
