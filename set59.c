#include<sdtio.h>
void main()
{
 int a[50],n,i,j;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  if(a[i]==0)
  {
   j=i;
   while(j>=0)
   {
    if(a[j]!=0)
    {
    printf("%d",a[j]);
    j--;
    }
   }
  }
 }
}
   
