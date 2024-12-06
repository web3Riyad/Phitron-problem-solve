#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    char s[100001];
    int i=0;
    while(cin>>getchar(s)!=EOF)
    {
        if(s[i]=='\0')
            break;
        i++;
    }
    sort(s,s+strlen(s));

    cout<<s;

    return 0;
}
