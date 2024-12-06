#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    queue<string>s;
    while(n--)
    {
        int x;
        cin>>x;
        if(x==0)
        {
            getchar();
            string p;
            cin>>p;
            s.push(p);
        }
        else
        {
            if(s.empty())
            {
                cout<<"Invalid"<<endl;
            }
            cout<<s.front()<<endl;
            s.pop();
        }

    }
    return 0;
}
