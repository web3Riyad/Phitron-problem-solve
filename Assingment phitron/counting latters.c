#include<stdio.h>
#include<string.h>
int main()
{
    char s[1234];
    scanf("%s",&s);
    int len=strlen(s);
    int count=0;
    int a[26]= {1};
    for(int i=0; i<len; i++)
    {
        int value=s[i]-'a';
        //printf("%c\n\n",s[i]);

        if(s[value]!=0)
        {
            count++;
            s[value]=0;
        }

    }
    printf("%d",count);
    return 0;
}
