#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    string name;
    int mark;
    int roll;
    node(string name,int roll,int mark)
    {
        this->name=name;
        this->roll=roll;
        this-> mark=mark;

    }
};
node* compare(vector<node*>&v)
{
    int vsize=v.size()-1;
    for(int i=0; i<vsize-1; i++)
    {
        for(int j=i+1; j<vsize; j++)
        {
            if(v[i]->mark==v[j]->mark)
            {
                if(v[i]->roll<v[j]->roll)
                {
                    swap(v[i],v[j]);
                }
            }
            else if(v[i]->mark>v[j]->mark)
            {
                swap(v[i],v[j]);
            }
        }
    }
    return v.front();
}
int main()
{
    int n;
    cin>>n;
    vector<node*>v;
    getchar();
    for(int i=0; i<n; i++)
    {
        string name;
        int roll,mark;
        cin>>name>>roll>>mark;
        node* obj=new node(name,roll,mark);
        v.push_back(obj);

    }
    int q;
    cin>>q;
    compare(v);
    while(q--)
    {
        int p;
        cin>>p;
        node* curmax;
        if(p==0)
        {
            getchar();
            string name;
            int roll,mark;
            cin>>name>>roll>>mark;
            node* obj=new node(name,roll,mark);
            v.push_back(obj);
            curmax=compare(v);
            cout<<curmax->name<<" "<<curmax->roll<<" "<<curmax->mark<<endl;
        }
        else if(p==1)
        {
            if(!v.empty())
            {
                cout<<curmax->name<<" "<<curmax->roll<<" "<<curmax->mark<<endl;
            }
            else
            {
                cout<<"Empty"<<endl;
            }
        }
        else if(p==2)
        {
            delete v[v.size()-1];
            if(!v.empty())
            {
                curmax=v[v.size()-1];
                cout<<curmax->name<<" "<<curmax->roll<<" "<<curmax->mark<<endl;
            }
            else
            {
                cout<<"Empty"<<endl;
            }
        }

    }
    return 0;
}
