#include<bits/stdc++.h>
using namespace std;
void print(int n,char c)
{
    for(int i=0; i<n; i++)
    {
        cout<<c<<" ";
    }
}
int main()
{
    int x;
    cin>>x;
    for(int i=0;i<x; i++)
    {

    int n;
    cin>>n;
    char c;
    cin>>c;
    print(n,c);
    cout<<endl;
    }

    return 0;
}
