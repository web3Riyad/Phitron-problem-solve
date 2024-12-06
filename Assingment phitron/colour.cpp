#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    int n;
    char a[n];
    getchar();
    scanf("%s",&a);
    for(int i=0; i<n-1; i++)
    {
        for(int j=0+i;j<n; j++)
           {

           if(a[i]==a[j])
        {
            a[i]=0;
            a[j]=0;
        }
        if((a[i]=='R' && a[j]=='G')  ||  (a[j]=='R' && a[i]=='G'))
        {
            a[i]='Y';
            a[j]=0;
        }
        else if((a[i]=='R' && a[j]=='B')  ||  (a[i]=='B' && a[j]=='R'))
        {
            a[i]='P';
            a[j]=0;
        }
        else if((a[i]=='B' && a[j]=='G')  ||  (a[i]=='G' && a[j]=='B'))
        {
            a[i]='C';
            a[j]=0;
        }
           }
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=0+i; j<n; j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]!=0)
            printf("%s",a[i]);
    }


    return 0;
}

