#include<stdio.h>
void main()
{
    int n,a[50],i,s=0,b[50],j=0,k=0,n1=0,c[50],d[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
        b[j]=s;
        j++;
    }
    for(i=n-1;i>=0;i--)
    {
        c[k]=b[i];
        k++;
    }
    b[j]='\0';
    c[k]='\0';
    for(i=0;b[i]!='\0';i++)
    {
        d[i]=b[i]+c[i];
        printf("%d ",d[i]);
    }

    return 0;
}
