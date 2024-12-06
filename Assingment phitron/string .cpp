#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    if(s[0]=='n' && s[1]=='e' && s[2]=='x' && s[3]=='t')
    {
        s.erase(s.begin(),s.begin()+4);
    }
    cout<<s;
}
