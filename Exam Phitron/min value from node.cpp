#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    string name;
    int mark;
    int roll;
    node(string name,int mark,int roll)
    {
        this->name=name;
        this->mark=mark;
        this->roll=roll;
    }
};
int main()
{
    int n;
    cin>>n;
    list<node*>lt;
    while(n--)
    {
        string name;
        int roll,mark;
        cin>>name>>roll>>mark;
        lt.push_back(name,mark,roll);
    }

}
