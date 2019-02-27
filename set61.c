#include<stdio.h>
void main()
{
 int n,x,i,j,a[50],t=0,f=0;
 scanf("%d",&n);
 scanf("%d",&x);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
    for(j=i+1;j<n;j++)
    {
      t=a[i]+a[j];
      if(t==x)
      {
        f=1;
        break;
      }
    }
    if(f==1)
    {
        break;
    }
 }
    if(f==1)
    {
      printf("yes");
     
    }
    else
    {
      printf("no");
     
    }
}
