#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    int cnt=0,flag=0;
    while(ss>>word)
    {
        int n=word.size();
        for(int i=0; i<n; i++)
        {

            if((word[i]>='a' && word[i]<='z') || (word[i]>='A' && word[i]<='Z'))
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            cnt++;
        }
        flag=0;
    }
    cout<<cnt;
    return 0;
}
