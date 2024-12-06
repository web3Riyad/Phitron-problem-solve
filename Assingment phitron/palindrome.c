#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int b[n];
    int flag=0;
    for(int i=0,j=n-1; i<n; j--,i++)
    {
        b[i]=a[j];
    }

    for(int i=0; i<n;i++)
    {
       if(a[i]==b[i])
       {
           flag++;
       }
    }
    if(flag==n)
        printf("YES");
    else
        printf("NO");
    return 0;
}
