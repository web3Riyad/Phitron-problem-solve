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
class myStack
{
public:
    node* head=NULL;
    node* tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        node *newnode=new node(val);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return ;
        }
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
    void pop()
    {
        sz--;
        node* deletenode=tail;
        if(tail->prev==NULL)
        {
            head=NULL;
            tail=NULL;
            delete deletenode;
            return ;
        }
        tail=tail->prev;
        tail->next=NULL;
        delete deletenode;

    }
    int top()
    {
        return tail->val;
    }
    int siz()
    {
        return sz;
    }
    bool emptystack()
    {
        if(sz==0)
        {
            return true;

        }
        else
            return false;
    }


};

class myqueue
{
public:
    node* head=NULL;
    node* tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        node *newnode=new node(val);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return ;
        }
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
    void pop()
    {
        sz--;
        node* deletenode=head;
        if(head->next==NULL)
        {
            head=NULL;
            tail=NULL;
            delete deletenode;
            return ;
        }
        head=head->next;
        head->prev=NULL;
        delete deletenode;

    }
    int top()
    {
        return head->val;
    }
    int siz()
    {
        return sz;
    }
    bool emptyqueue()
    {
        if(sz==0)
        {
            return true;

        }
        else
            return false;
    }


};
int main()
{
    myStack st;
    myqueue q;
    int p,r;
    cin>>p>>r;

    for(int i=0; i<p;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }

    for(int i=0;i<r;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    if(p!=r)
    {
        cout<<"NO";
    }
    else
    {
        int flag=0;
        while(!st.emptystack())
        {
            if(st.top()!=q.top())
            {
                flag=1;
                break;
            }
            st.pop();
            q.pop();
        }
        if(flag==0)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }

    return 0;
}
