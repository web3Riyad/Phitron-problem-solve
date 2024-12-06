
#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void add(node* &head,int val)
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
insertathead(node* &head,int val)
{
    node *newnode=new node(val);
    newnode->next=head;
    head=newnode;

}

void insertAtAnyPosition(node* head,int v,int pos)
{
    node* newnode=new node(v);
    node* temp=head;
    for(int i=1; i<pos; i++)
    {
        temp=temp->next;

    }
    newnode->next=temp->next;
    temp->next=newnode;
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
    node * head=NULL;

    while(1)
    {

        int val;
        cin>>val;
        if(val<0)break;
        add(head,val);

    }
    print(head);

    int q;
    cin>>q;
    while(q--)
    {
        int v,pos,q;
        cout<<endl<<"enter the position and value"<<"\t";
        cin>>pos>>v;
        int cnt=count_fuction(head);
        if(pos>cnt)
            cout<<"INVALID"<<endl;
        else if(pos==0)
        {

            insertathead(head,v);
            print(head);
        }
        else
        {
            insertAtAnyPosition(head,v,pos);
            print(head);
        }


    }

    return 0;
}
