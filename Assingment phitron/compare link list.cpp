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
void add(node* &head,node* &tail,int val)
{

    node *newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return ;
    }
    tail->next=newnode;
    tail=tail->next;

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
    node * tail=NULL;

    node * head1=NULL;
    node * tail1=NULL;
    while(1)
    {

        int val;
        cin>>val;
        if(val==-1)break;
        add(head,tail,val);

    }
    while(1)
    {

        int val;
        cin>>val;
        if(val==-1)break;
        add(head1,tail1,val);

    }
    int cnt1=count_fuction(head);
    int cnt2=count_fuction(head1);

    node* temp=head;
    node* temp1=head1;
    int flag=0;
    if(cnt1!=cnt2)
        cout<<"NO";
    else
    {
        for(node *i=temp; i!=NULL; i=i->next)
        {
            if(i->val!=temp1->val)
            {
                flag=1;
                break;
            }

            temp1=temp1->next;
        }
        if(flag==1)
        cout<<"NO";
        else cout<<"YES";
    }


    return 0;
}
