#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v[i]<v[j])
                swap(v[i],v[j]);
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}
