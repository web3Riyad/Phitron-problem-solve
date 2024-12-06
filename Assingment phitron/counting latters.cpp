#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 cin>>s;
 int p=s.size();
 int a[26]={0};
 int value;
 for(int i=0;i<p; i++ )
 {
    value=s[i]-'a';
     a[value]++;
 }
 for(int i=0; i<26; i++)
 {
     int p=a[i];
     char c=i+'a';

        if(p!=0)
        {

         cout<<c<<" "<<":"<<" "<<a[i]<<endl;
         p=0;
        }

 }
 return 0;
}
