#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node* next;
    node* prev;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void add(node* &head,node* &tail,int val)
{
    node* newnode=new node(val);
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
int countlist(node* head)
{
    node* temp=head;
    int cont=0;
    while(temp!=NULL)
    {
        cont++;
        temp=temp->next;
    }
    return cont;
}
void print_head(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void print_tail(node* tail)
{
    node* temp=tail;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
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
        int v;
        cin>>v;
        if(v==-1) break;
        add(head,tail,v);
    }
    node* temp=head;
    node* temp2=tail;
    int flag=0;
    while(temp!=NULL)
    {
        if(temp->val!=temp2->val)
        {
            flag=1;
            break;
        }
        temp=temp->next;
        temp2=temp2->prev;
    }
   if(flag==0)
   {
       cout<<"YES"<<endl;
   }
   else
    cout<<"NO"<<endl;
    return 0;
}

