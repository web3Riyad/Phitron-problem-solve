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

int main()
{
    node * head=NULL;
    //node* tail=NULL;
    while(1)
    {

        int val;
        cin>>val;
        if(val<0)break;
        add(head,val);

    }
    int cunt=count_fuction(head);
    cout<<cunt;

    return 0;
}
