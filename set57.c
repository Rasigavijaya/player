#include<stdio.h>
void main()
{
 char a[50],k;
 int i,n,c=0;
 gets(a);
 scanf("%c",&k);
 n=strlen(a);
 for(i=0;i<n;i++)
 {
  if(a[i]==k)
  {
  c++;
  }
 }
   printf("%d",c);
  }
