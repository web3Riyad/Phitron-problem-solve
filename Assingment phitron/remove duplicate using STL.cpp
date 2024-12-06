#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int >mylist;
    while(1)
    {
        int n;
        cin>>n;
        if(n==-1)
        {
            break;
        }
        mylist.push_back(n);
    }
    mylist.sort();
    mylist.unique();
    for(int p:mylist)
    {
        cout<<p<<" ";
    }
    return 0;
}
