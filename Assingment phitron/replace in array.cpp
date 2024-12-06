#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   long long int a[n];
   for(int i=0; i<n ;i++)
   {
       cin>>a[i];
   }
   for(int i=0; i<n; i++)
   {
       if(a[i]>0)
        a[i]=1;
       else if(a[i]<0)
        a[i]=2;
   }
   int flag=0;
   for(int i=0; i<n; i++)
   {
       if(flag=0)
       {
           cout<<a[i];
           flag=1;
       }
       else
        cout<<" "<<a[i];

   }
   return 0;

}
