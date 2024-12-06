#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    int  ID;
    char name;
    char sec;
    int total_marks;

};
int main()
{
    int s;
    cin>>s;
    for(int i=0; i<s; i++)
    {

        student x,y,z;
        cin>>x.ID>>x.name>>x.sec>>x.total_marks;
        cin>>y.ID>>y.name>>y.sec>>y.total_marks;
        cin>>z.ID>>z.name>>z.sec>>z.total_marks;



        if(x.total_marks>y.total_marks && x.total_marks>z.total_marks)
        {
            cout<<x.ID<<" "<<x.name<<" "<<x.sec<<" "<<x.total_marks;
        }
        else if(y.total_marks>x.total_marks && y.total_marks>z.total_marks)
        {
            cout<<y.ID<<" "<<y.name<<" "<<y.sec<<" "<<y.total_marks;
        }
        else if(z.total_marks>x.total_marks && z.total_marks>y.total_marks)
        {
            cout<<z.ID<<" "<<z.name<<" "<<z.sec<<" "<<z.total_marks;
        }

         else if(x.total_marks==y.total_marks)
        {
            if(x.ID>y.ID)
                cout<<x.ID<<" "<<x.name<<" "<<x.sec<<" "<<x.total_marks;
            else
                cout<<y.ID<<" "<<y.name<<" "<<y.sec<<" "<<y.total_marks;
        }
        else if(z.total_marks==y.total_marks)
        {
            if(y.ID>z.ID)
            {
                cout<<y.ID<<" "<<y.name<<" "<<y.sec<<" "<<y.total_marks;
            }
            else
                cout<<z.ID<<" "<<z.name<<" "<<z.sec<<" "<<z.total_marks;
        }
        else if(z.total_marks==x.total_marks)
        {
            if(z.ID>x.ID)
                cout<<z.ID<<" "<<z.name<<" "<<z.sec<<" "<<z.total_marks;
            else
                cout<<x.ID<<" "<<x.name<<" "<<x.sec<<" "<<x.total_marks;

        }

        cout<<"\n";

    }
    return 0;



}
