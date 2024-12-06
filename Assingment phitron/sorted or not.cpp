#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin>>x;
    while(x--)
    {

        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n ; i++)
        {
            cin>>a[i];
        }
        int flag1=0;
        for(int i=0; i<n-1; i++)
        {
            if(a[0]<a[1])
            {

                for(int j=i+1; j<n; j++)
                {
                    if(a[i]<a[j] || a[i]==a[j])
                    {
                        continue;
                    }
                    flag1=1;
                    break;

                }
            }
            else if(a[0]>a[1] || a[0]==a[1])
            {

                for(int j=i+1; j<n; j++)
                {
                    if(a[i]>a[j] || a[i]==a[j])
                    {
                        continue;
                    }
                    flag1=1;
                    break;

                }
            }
            else if(a[0]==a[1])
            {
                if(a[0]<a[1])
                {

                    for(int j=i+1; j<n; j++)
                    {
                        if(a[i]<a[j] || a[i]==a[j])
                        {
                            continue;
                        }
                        flag1=1;
                        break;

                    }
                }
                 else if(a[0]>a[1] || a[0]==a[1])
                {

                    for(int j=i+1; j<n; j++)
                    {
                        if(a[i]>a[j] || a[i]==a[j])
                        {
                            continue;
                        }
                        flag1=1;
                        break;

                    }
                }

            }
        }
        if(flag1==0)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

