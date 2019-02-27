#include<stdio.h>
void main()
{
    int a[50],b[50],n,i,k,j=0,t;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<k)
        {
            b[j]=a[i];
            j++;
        }
    }
    b[j]='\0';
    for(j=0;b[j]!='\0';j++)
    {
     for(i=j+1;b[i]!='\0';i++)
     {
        if(b[j]>b[i])
        {
            t=b[j];
            b[j]=b[i];
            b[i]=t;
        }
     }
    }
    for(i=0;b[i]!='\0';i++)
    {
        printf("%d ",b[i]);
    }
}
