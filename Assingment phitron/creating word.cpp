#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        swap(a[0],b[0]);
        cout<<a<<" "<<b;
        if(t>0)
            cout<<endl;
    }
    return 0;
}
