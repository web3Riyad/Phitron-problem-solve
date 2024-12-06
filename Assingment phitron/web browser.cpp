#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<string>mylist;
    while(1)
    {
        string s;
        cin>>s;
        if(s=="end")
        {
            break;
        }
        mylist.push_back(s);
    }
    int q;
    cin>>q;
    while(q--)
    {
        string x;
        cin>>x;
     it= find(mylist.begin(),mylist.end(),x);

    }
    if(it==mylist.end())
    {
        cout<<"Not Available"<<endl;
    }
    else
    {
        cout<<*it<<endl;
    }
    for(string p:mylist)
    {
        cout<<p<<endl;
    }
    return 0;
}
