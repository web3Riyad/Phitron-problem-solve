
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
    int n;
    cin>>n;
    while(n--)
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
    long long int x;
    cin>>x;
    int cnt=0,flag=0;

    for(node* i=head; i!=NULL; i=i->next)
    {
        cnt++;
        if(i->val==x)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<cnt-1<<endl;
    }
    else cout<<"-1"<<endl;
    }

    return 0;

}

