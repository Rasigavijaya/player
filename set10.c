#include <stdio.h>

int main()
{
   char a[50],b[50];
   int i,n,c=0,n1;
   scanf("%s",&a);
   scanf("%s",&b);
   n=strlen(a);
   n1=strlen(b);
   if(n==n1)
   {
   for(i=0;i<n;i++)
   {
       if(a[i]==b[i])
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
       printf("No");
   }
   }
    return 0;
}
