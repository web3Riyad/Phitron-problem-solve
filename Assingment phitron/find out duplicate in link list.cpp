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
int find_out_duplicate(node *head)
{
    node* temp=head;

    for(node *i=temp; i->next!=NULL; i=i->next)
    {
        for(node *j=i->next; j!=NULL; j=j->next)
        {
            if(i->val==j->val)
                return 1;
        }
    }
    return 0;

}

int main()
{
    node * head=NULL;
    node* tail=NULL;
    while(1)
    {

        int val;
        cin>>val;
        if(val<0)break;
        add(head,val);

    }
    int take=find_out_duplicate(head);
    if(take==1)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
