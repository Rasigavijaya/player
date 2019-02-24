#include<stdio.h>
void  main()
{
 char a[50];
 int i,j,c=0,n=0;
 scanf("%[^\n]s",a);
 n=strlen(a);
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(a[i]!=a[j])
   {
    printf("%c\t",a[i]);
   }
  }
 }
 }
