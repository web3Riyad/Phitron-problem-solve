#include<stdio.h>
#include<string.h>
int main()
{
    int w;
    scanf("%d",&w);
    for(int j=0; j<w; j++)
    {

        char s1[10001];
        char s2[10001];
        scanf("%s %s",&s1,&s2);
       // scanf(" %s",&s2);

        int a[26]= {0};
        int b[26]= {0};
        int len1=strlen(s1);
        int len2=strlen(s2);
        for(int i=0; i<len1; i++)
        {
            int value=s1[i]-'a';
            a[value]++;
        }
        for(int i=0; i<len2; i++)
        {
            int value=s2[i]-'a';
            b[value]++;
        }
        int coun=0;
        if(len1!=len2)
            printf("NO\n");
        else
        {
            for(int i=0; i<26; i++ )
            {

                    if(a[i]!=0 && a[i]==b[i])
                    {
                        coun++;
                    }


            }
            if(coun==len1)
            {
                printf("YES\n");
            }
            else
                printf("NO\n");
        }
        printf("%d\n",coun);
        printf("%d\n",len1);
    }
    return 0;
}
