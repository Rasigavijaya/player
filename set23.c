#include<stdio.h>
void main()
{
 int n,k,a[50],i,j,max,p;
 scanf("%d%d",&n,&k);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 j=0;
 while(j<k)
 {
  scanf("%d",&p);
  a[n]=p;
  n++;
  max=a[0];
  for(i=0;i<n;i++)
  {
   if(a[i]>max);
   {
    max=a[i];
   }
  }
  printf("%d",max);
  j++;
 }
}
