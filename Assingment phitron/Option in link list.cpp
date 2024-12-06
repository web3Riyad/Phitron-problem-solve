#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    long long int val;
    node *next;
    node(long long int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insertathead(node* &head,long long int val)
{
    node *newnode=new node(val);
    newnode->next=head;
    head=newnode;
    return ;

}


void add(node* &head,long long int val)
{

    node *newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;

}
void deletenode(node * head,node* &tail,long long int ps)
{
    node* temp=head;
    for(int i=1; i<ps; i++ )
    {
        temp=temp->next;
    }
    node* deletenode=temp->next;
    temp->next=temp->next->next;
    delete deletenode;
}
void delete_tail(node* head)
{
    node* temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;

}
void deletehead(node * &head)
{
    node* deletenode=head;
    head=head->next;
    delete deletenode;
    return ;

}
int count_fuction(node* head)
{
    node* temp=head;
    int cunt=0;
    while(temp!=NULL)
    {

        temp=temp->next;
        cunt++;

    }
    return cunt;
}
void print(node *head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    node* head=NULL;
    node *tail=NULL;
    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int x;
        long long int v;
        cin>>x>>v;
        if(x==0)
        {
            insertathead(head,v);
             print(head);
        }
        else if(x==1)
        {
            add(head,v);
            print(head);
        }

        else if(x==2)
        {
            int cnt=count_fuction(head);
            if(v>=cnt)
            {
                print(head);
                continue;
            }
            else if(v==cnt-1)
            {
                delete_tail(head);
                print(head);
            }
            else
            {
                if(v!=0)
                    deletenode(head,tail,v);
                else
                    deletehead(head);

                print(head);

            }
        }
    }
    return 0;
}
