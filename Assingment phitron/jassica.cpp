#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int flag=0;//Rahat Rifat Sakib Asif Sifat Jessica Ratul Munna
    getline(cin,s);
    stringstream ss(s);//s.replace(s.find("bad"), 3, "good");
    string word;
    while (ss>>word)
    {
        while(s.find("Jessica")!=-1)
       s.replace(s.find("Jessica"),7,"#");
    }

        cout<<s<<endl;

    return 0;

}
