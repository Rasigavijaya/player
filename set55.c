#include<stdio.h>
void main()
{
 char a[50],k;
 int i,n;
 gets(a);
 scanf("%c",&k);
 n=strlen(a);
 for(i=0;i<n;i++)
 {
  if(a[i]==k)
  {
   printf("%d",i);
   break;
  }
 }
 }
