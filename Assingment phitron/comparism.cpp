#include<stdio.h>
int main()
{
    int a,c;
    char b;
    scanf("%d %c%d",&a,&b,&c);
    if(b=='<')
    {
        if(a<c)
            printf("Right");
        else
            printf("Wrong");
    }
    if(b=='>')
    {
        if(a>c)
            printf("Right");
        else
            printf("Wrong");
    }
    if(b=='=')
    {
        if(a==c)
            printf("Right");
        else
            printf("Wrong");
    }


    return 0;
}
