#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    getchar();
    while(n--)
    {
    map<string,int>mp;
    string s;
    getline(cin,s);
    string word;
    stringstream ss(s);
    int mx=0;
    string r;
    while(ss>>word)
    {
        mp[word]++;
        if(mx<mp[word])
        {
            mx=mp[word];
            r=word;
        }

    }
    cout<<r<<" "<<mx<<endl;
    }
        return 0;
}
