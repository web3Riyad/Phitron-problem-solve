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
    tail=newnode;
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
int count_fuction2(node* head,node* tail)
{
    node* temp=head;
    int cunt=0;
    while(temp!=tail)
    {

        temp=temp->next;
        cunt++;

    }
    return cunt;
}
void deletenode(node * head,int ps)
{
    ps--;
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
    node *deletenode=temp->next;
    temp->next=NULL;
    delete deletenode;


}
void print(node *head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}

int main()
{
    node * head=NULL;
    node* tail=NULL;
    while(1)
    {

        int val;
        cin>>val;
        if(val==-1)break;
        add(head,tail,val);

    }
    node* temp=head;

    for(node* i=temp; i->next!=NULL; i=i->next)
    {

        for(node* j=i->next; j!=NULL; )
        {
            if(i->val==j->val)
            {

                int link_list=count_fuction(head);
                int remove_list=count_fuction2(head,j);

                if(remove_list+1==link_list)
                {
                    delete_tail(head);
                    j=j->next
                }
                else
                {
                    /*swap(j->val,j->next->val);
                    node* deletenode=j->next;
                    j->next=j->next->next;
                    delete deletenode;*/
                    deletenode(head,remove_list);

                }
            }
        }
    }
    print(head);
    return 0;
}
