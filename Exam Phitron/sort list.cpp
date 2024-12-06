#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        list<long long int>l;
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            l.push_back(x);
        }
        l.sort();
        l.unique();
        for(int p:l)
        {
            cout<<p<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
