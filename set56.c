#include<stdio.h>

void main()
{
 char a[50],b[50];
 int i,f=0,n,n1;
 gets(a);
 gets(b);
 n=strlen(a);
 n1=strlen(b);
 if(n==n1)
 {
  for(i=0;i<n;i++)
  {
   if(a[i]!=b[i])
   {
    f=1;
    break;
   }
  }
 }
 else
 {
 printf("no");
 }
 if(f==1)
 {
  printf("no");
 }
 else
 {
  printf('yes");
 }
 }
