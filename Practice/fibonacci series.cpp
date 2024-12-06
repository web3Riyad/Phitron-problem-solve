#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if(n==0  || n==1)
        return n ;
    int num1=fibo(n-1);
    int num2=fibo(n-2);
    int ans=num1+num2;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<fibo(n);
    return 0;
}
