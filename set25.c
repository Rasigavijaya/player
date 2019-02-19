#include<stdio.h>
void main()
{
 char a[50];
 int i,n,c=0,c1=0,j,k,t;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%s",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(a[i]>a[j])
   {
    t=a[i];
    a[i]=a[j];
    a[j]=t;
   }
  }
 }
 for(i=0;i<n;i++)
 {
  c=strlen(a[i]);
  c1=strlen(a[i+1]);
  if(c>c1)
  {
   t=a[i];
    a[i]=a[j];
    a[j]=t;
   }
  }
  for(i=0;i<n;i++)
  {
  printf("%s",a[i]);
  }
 }
  
