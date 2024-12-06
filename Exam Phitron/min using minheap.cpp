#include<bits/stdc++.h>
using namespace std;
void add(vector<int>&v,int x)
{
    v.push_back(x);
    int curix=v.size()-1;
    while(curix!=0)
    {
        int parix=(curix-1)/2;
        if(v[curix]<v[parix])
            swap(v[curix],v[parix]);
        else break;
        curix=parix;
    }

}
void deleteheap(vector<int>&v)
{
    v[0]=v[v.size()-1];
    v.pop_back();
    int curindex=0;
    while(true)
    {
        int left_index=curindex*2+1;
        int right_index=curindex*2+2;
        int last_index=v.size()-1;
        if(left_index<=last_index && right_index<=last_index)
        {
            if(v[left_index]<v[right_index] && v[left_index]<v[curindex])
            {
                swap(v[left_index],v[curindex]);
                curindex=left_index;
            }
            else if(v[right_index]<v[left_index] && v[right_index]<v[curindex])
            {
                swap(v[right_index],v[curindex]);
                curindex=right_index;
            }
            else break;
        }
        else if(left_index<=last_index)
        {
            if(v[left_index]<v[curindex])
            {
                swap(v[left_index],v[curindex]);
                curindex=left_index;
            }
            else break;
        }
        else if(right_index<=last_index)
        {
            if(v[right_index]<v[curindex])
            {
                swap(v[right_index],v[curindex]);
                curindex=right_index;
            }
            else break;
        }
        else
        {
            break;
        }

    }
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        add(v,x);
    }
    int x;
    cin>>x;
    while(x--)
    {
        int p;
        cin>>p;
        if(p==0)
        {
            int val;
            cin>>val;
            add(v,val);
            cout<<v.front()<<endl;
        }
        else if(p==1)
        {
            cout<<v.front()<<endl;

        }
        else if(p==2)
        {
            deleteheap(v);
            cout<<v.front()<<endl;
        }

    }

    return 0;
}
