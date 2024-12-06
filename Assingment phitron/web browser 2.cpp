#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    string name;
    node* next;
    node* prev;
    node(string name)
    {
        this->name=name;
        this->next=NULL;
        this->prev=NULL;
    }
};
void add(node* &head,node* &tail,string name)
{
    node* newnode=new node(name);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;

}



void print_head(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->name<<endl;
        temp=temp->next;
    }
    cout<<endl;
}
void print_tail(node* tail)
{
    node* temp=tail;
    while(temp!=NULL)
    {
        cout<<temp->name<<endl;
        temp=temp->prev;
    }
    cout<<endl;
}
int main()
{
    node* head=NULL;
    node* tail=NULL;
    while(1)
    {
        string v;
        cin>>v;
        if(v=="end") break;
        add(head,tail,v);
    }
    int q;
    cin>>q;
    getchar();
    node* temp=head;
    int flag=0;
    while(q--)
    {
        string s,x;
        getline(cin,s);
        if(s[0]=='v' && s[1]=='i' && s[2]=='s' && s[3]=='i' && s[4]=='t')
        {
            s.erase(s.begin(),s.begin()+6);

        }

        for(node* i=head; i!=NULL; i=i->next)
        {
            if(s==i->name)
            {
                flag=1;
            }
        }
        if(flag=1)
        {

            while(temp->name!=s)
            {
                temp=temp->next;
            }
        }
        if(s=="next" && temp->next!=NULL)
        {
            temp=temp->next;
            flag=1;

        }
        if(s=="prev" && temp->prev!=NULL)
        {
            temp=temp->prev;
            flag=1;
        }

        if(flag==0)
        {
            cout<<"Not Available";
        }
        else
        {
            cout<<temp->name<<endl;
        }

        flag=0;
    }

    print_head(head);
    print_tail(tail);

    return 0;
}
