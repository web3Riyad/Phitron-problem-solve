#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    char nm[101];
    int cls;
    char s;
    int id;
};
int main()
{
    int n;
    cin>>n;
    student a[n];

    for(int i=0; i<n; i++)
    {
        cin.ignore();
        cin>>a[i].nm;
        cin>>a[i].cls;
        cin.ignore();
        cin>>a[i].s>>a[i].id;
    }
    for(int i=0,j=n-1; i<n; i++,j--)
    {
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[j].s<<" "<<a[i].id<<endl;
    }
    return 0;
}

