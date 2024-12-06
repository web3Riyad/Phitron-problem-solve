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
void delete_head(node* &head)
{
    node* delete_node=head;
    head=head->next;
    head->prev=NULL;
    delete delete_node;
}
void delete_any_position(node *head,int posi)
{
    node* temp=head;
    for(int i=1; i<posi; i++)
    {
        temp=temp->next;
    }
    node* deletenode=temp->next;
    temp->next=deletenode->next;
    deletenode->next->prev=temp;
    delete deletenode;
}
void delete_tail(node* &tail)
{
    node* delete_node=tail;
    tail=tail->prev;
    tail->next=NULL;
    delete delete_node;
}
void print_head(node* head)
{
    node* temp=head;
    int flag=0;
    while(temp!=NULL)
    {
        if(flag==0)
        {
            cout<<"L -> "<<temp->val;
            flag=1;
        }
        else
        {
            cout<<" "<<temp->val;
        }
        temp=temp->next;
    }
    cout<<endl;
}
void print_tail(node* tail)
{
    node* temp=tail;
    int flag=0;
    while(temp!=NULL)
    {
        if(flag==0)
        {
            cout<<"R -> "<<temp->val;
            flag=1;
        }
        else
        {
            cout<<" "<<temp->val;
        }
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
        if(x==0)
        {
            add_head(head,tail,v);
            print_head(head);
            print_tail(tail);
        }
        if(x==1)
        {
            add_tail(head,tail,v);
            print_head(head);
            print_tail(tail);

        }
        if(x==2)
        {
            if(v==0)
            {
                void delete_head(head);
                print_head(head);
                print_tail(tail);
            }
            else if(v>0 && v<cnt-1)
            {
                delete_any_position(head,v);
                print_head(head);
                print_tail(tail);
            }
            else if(v==cnt-1)
            {
                delete_tail(tail);
                print_head(head);
                print_tail(tail);
            }

        }


    }

    return 0;

}


