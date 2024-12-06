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
void add_head(node *&head,node* &tail,int val)
{
    node* newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return ;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void insert_at_position(node* head,int val,int pos)
{
    node* newnode=new node(val);
    node* temp=head;
    for(int i=1; i<pos; i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->prev=temp;
    newnode->next->prev=newnode;



}
void add_tail(node* &head,node* &tail,int val)
{
    node *newnode=new node(val);
    if(tail==NULL)
    {
        head=newnode;
        tail=newnode;
        return ;
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
        cout<<"L -> "<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void print_tail(node* tail)
{
    node* temp=tail;
    while(temp!=NULL)
    {
        cout<<"R -> "<<temp->val<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}


int main()
{
    node* head=NULL;
    node* tail=NULL;
    int q;
    cin>>q;
    while(q--)
    {
        int cnt=countlist(head);
        int x,v;
        cin>>x>>v;
        if(x<0 || x>=cnt)
        {
            cout<<"Invalid"<<endl;
        }
        else if(x==0)
        {
            add_head(head,tail,v);
            print_head(head);
            print_tail(tail);
        }
        else if(x>0 && x<cnt-1)
        {
            insert_at_position(head,v,x);
            print_head(head);
            print_tail(tail);
        }
        else if(x==cnt-1)
        {
            add_tail(head,tail,v);
            print_head(head);
            print_tail(tail);
        }
    }

    return 0;

}

