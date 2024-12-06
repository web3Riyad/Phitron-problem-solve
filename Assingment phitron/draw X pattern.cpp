#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p=(n/2)+1;

    for(int i=1; i<=n; i++)
    {
        for(int j=1 ; j<=n; j++)
        {

            if(i==j)
            {
                if(i==p && j==p)
                    cout<<"X";
                else
                    cout<<"\\";
            }
            if(i+j==n+1)
            {
                if(i==p && j==p)
                    continue;
                else
                    cout<<"/";
            }
            if(i!=j && i+j!=n+1)
                cout<<" ";


        }
        cout<<endl;
    }
    return 0;
}
