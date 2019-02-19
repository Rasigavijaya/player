#include<stdio.h>
void main()
{
 char a[50],b[50];
 int i,n,j=0;
 scanf("%[^\n]s",&a);
 n=strlen(a);
 for(i=0;i<n;i++)
 {
  if(a[i]==' ')
  {
   b[j]=a[i+1];
   j++;
  }
  else
  {
      b[j]=a[i];
      j++;
  }
 }
 printf("%s",b);
 }
 
