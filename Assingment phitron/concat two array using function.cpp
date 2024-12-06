#include<bits/stdc++.h>
using namespace std;
int* fun(int a[],int b[], int n)
{
    int *p=new int[2*n];
    for(int i=0; i<n; i++)
    {
        p[i]=b[i];
    }
    for(int i=0,j=n; i<n; j++,i++)
    {
        p[j]=a[i];
    }
    return p;
}
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    int* p=fun(a,b,n);
    int flag=0;
    int x=2*n;
    for(int i=0; i<x; i++)
    {
        if(flag==0)
        {
         cout<<p[i];
         flag=1;
        }
        else
            cout<<" "<<p[i];
    }
    return 0;

}
