#include<stdio.h>
void main()
{
 int a[50],i,j,f=0,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(a[i]>a[j])
   {
    f=1;
    break;
   }
  }
 }
 if(f=1)
 {
  printf("no");
 }
 else
 {
  printf("no");
 }
}
 
 
