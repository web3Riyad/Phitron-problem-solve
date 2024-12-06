#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
    stack<int>s1,s2;
    string s;
    cin>>s;
    for(char c:s)
    {
        if(c=='0')
        {
            s1.push(c);
        }
        else
        {
            s2.push(c);
        }

    }
    if(s1.size()==s2.size())
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    }
    return 0;
}
