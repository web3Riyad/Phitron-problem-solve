#include<bits/stdc++.h>
using namespace std;
int* sort_it(int a[],int n)
{
    int *p=new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>p[i];
    }
    sort(p,p+n,greater<int>());
    return p;
}
int main()
{
    int n;
    cin>>n;
    int A[n];

    int *a=sort_it(A,n);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
