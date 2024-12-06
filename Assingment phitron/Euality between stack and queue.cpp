#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    queue<int> q;
    int n;
    cin>>n;
    int m;
    cin>>m;
    while(n--)
    {
        int x;
        cin>>x;
        st.push(x);
    }

    while(m--)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    if(n!=m)
    {
        cout<<"NO";
    }
    else
    {
        int flag=0;
    while(!st.empty())
    {
        if(st.top()!=q.front())
        {
            flag=1;
            break;
        }
        st.pop();
        q.pop();
    }
    if(flag==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    }

    return 0;
}
