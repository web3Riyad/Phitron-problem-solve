#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int p=2*n;
    int a[n],b[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        scanf("%d",&b[i]);
    }

    int c[p]=strcat(b,a);
    for(int i=0; i<p; i++)
    {
        printf("%d",c[i]);
    }
    return 0;
}
