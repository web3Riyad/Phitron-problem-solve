#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    getchar();
    while(n--)
    {
        stack<char> st;
        string p;
        cin>>p;
        for(char c:p)
        {
            if(c=='0')
            {
                st.push(c);
            }
            else
            {
                if(st.empty())
                {
                    st.push(c);
                    continue;
                }
                if(st.top()=='0')
                {
                    st.pop();

                }
            }
        }
        if(st.empty())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}
