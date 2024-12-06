
#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    long long int val;
    node *next;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void add(node* &head,node* &tail, long long int val)
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


int main()
{
   node * head=NULL;
   node * tail=NULL;
    while(1)
    {

        long long int val;
        cin>>val;
        if(val==-1)break;
        add(head,tail,val);

    }
    int min_value=head->val;
    int max_value=head->val;
    for(node* i=head; i!=NULL; i=i->next)
    {

            if(i->val<min_value)
            {
                min_value=i->val;
            }
            if(i->val>max_value)
            {
                max_value=i->val;
            }

    }
    long long int dif=max_value-min_value;
    cout<<dif<<endl;;
    return 0;

}
