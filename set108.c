#include<stdio.h>
void main()
{
    int n,a[50],i,s=0,b[50],j=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=0;
        for(k=0;k<=i;k++)
        {
        s=s+a[k];
        }
        b[j]=s;
        j++;
    }
    b[j]='\0';
    for(i=0;b[i]!='\0';i++)
    {
        printf("%d ",b[i]);
    }

    return 0;
}
