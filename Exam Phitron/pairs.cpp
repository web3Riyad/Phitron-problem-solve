#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<pair<string,int>>p;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string name;
        int x;
        cin>>name>>x;
        p.push_back({name,x});
    }
    p.sort();
    for(pair<string,int> s:p)
    {
        cout<<s.first<<" "<<s.second<<endl;
    }
    return 0;
}
