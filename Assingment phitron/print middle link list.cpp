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
void print(node *head,int even)
{
    node* temp=head;
    even--;
    while(even--)
    {

        temp=temp->next;
    }
    cout<<temp->val<<" "<<temp->next->val;
}
void print2(node *head,int odd)
{
    node* temp=head;
    while(odd--)
    {

        temp=temp->next;
    }
    cout<<temp->val;

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
    int pos=count_fuction(head);
    if(pos%2==0)
    {
       int even=pos/2;
       print(head,even);
    }
    else
        print2(head,pos/2);
    return 0;
}
