#include <stdio.h>
int main()
{
    int n,k,c=0,a[50],i,j,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            c++;
        }
        
        else
        {
            d++;
        }
    }
    if(c==n-1)
    {
    for(i=0;i<n;i++)
    {
      if(a[i]%2!=0)
      {
          printf("%d",a[i]);
      }
    }
    }
    if(d==n-1)
    {
       for(i=0;i<n;i++)
      {
      if(a[i]%2==0)
      {
          printf("%d",a[i]);
      }
    } 
    }
    return 0;
}
