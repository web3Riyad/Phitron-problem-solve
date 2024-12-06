#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    list<int>lt;
    int mx=0;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;

        lt.push_back(x);
    }
    int q;
    cin>>q;
    lt.sort();
    while(q--)
    {
        int c;
        cin>>c;
        if(c==0)
        {
            int val;
            cin>>val;
            lt.push_back(val);
            lt.sort();
            cout<<lt.front()<<endl;
        }
        else if(c==1)
        {
           cout<<lt.front()<<endl;
        }
        else if(c==2)
        {
            lt.pop_front();
            if(lt.empty()) cout<<"Empty"<<endl;
            else
            cout<<lt.front()<<endl;
        }
    }
    return 0;
}
