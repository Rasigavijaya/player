#include<stdio.h>
void main()
{
 char a[50],b[50];
 int i,n,j=0;
 scanf("%s",&a);
 n=strlen(a);
 for(i=0;i<n;i++)
 {
  if(a[i]>'90')
  {
   b[j]=a[i]-32;
   j++:
  }
