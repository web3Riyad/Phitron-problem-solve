#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    for(int z=0; z<x; z++)
    {

        int n,s;
        cin>>n>>s;
        int A[n];
        int flag=0;
        if(n<2)
            cout<<"NO";


        for(int i=0; i<n; i++)
        {
            cin>>A[i];
        }


       for(int i=0; i<n-2; i++)
        {
            for(int j=i+1; i<n-1; j++)
            {
                for(int k=i+2; k<n; k++)
                {
                    int sum=A[i]+A[j]+A[k];
                    if(sum==s)
                        {
                            flag=1;
                            cout<<"YES";
                            break;
                        }

                }
            }

        }
    if(flag==0)
        cout<<"NO";



    cout<<"n";
    }
    return 0;

}
