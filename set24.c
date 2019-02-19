#include<stdio.h>
void main()
{
 char a[50];
 int i,n,c=0;
 scanf("%s",a);
 n=strlen(a);
 for(i=0;a[i]!='\0';i++)
 {
  if(0<=a[i] && a[i]>=9)
  {
   c++;
  }
 }
 if(c==n)
 {
  printf("yes");
 }
 else
 {
  printf("no");
 }
}
