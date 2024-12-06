#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    getchar();
    vector<pair<string,int> >v;
    for(int i=0; i<n;i++)
    {
        string name;
        int x;
        cin>>name>>x;
        v.push_back({name,x});
    }
    for(int i=0; i<n-1 ; i++)
    {
        for(int j=i+1; j<n ;j++)
        {
            if(v[i].first>=v[j].first)
            {
                if(v[i].first==v[j].first)
                {
                    if(v[i].second<v[j].second)
                    {
                        swap(v[i],v[j]);
                    }
                }
                else swap(v[i],v[j]);
            }
        }
    }
    for(pair<string,int> p:v)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}
