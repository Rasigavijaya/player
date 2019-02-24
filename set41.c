#include<stdio.h>
void main()
{
 int n,k,i,j,m=1,f=0;
 scanf("%d %d",&n,&k);
 for(i=0;i<=n;i++)
 {
  for(j=i;j>0;j--)
  {
   m=m*k;
   if(m==n)
   {
    f=1;
    break;
   }
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
