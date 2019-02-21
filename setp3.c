#include <stdio.h>

int main()
{
    char a[50],b[50];
    int i,n,k,j,c=0;
    scanf("%s",a);
    scanf("%s",b);
    scanf("%d",&k);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=b[i])
        {
            a[i]='*';
            c++;
        }
    }
    if(c==k)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}


