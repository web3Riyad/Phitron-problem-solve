#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    getchar();
    char s[n];
    cin>>s;

    sort(s,s+n);
    cout <<s;

    return 0;
}
