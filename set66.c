#include <stdio.h>

int main()
{
    int a[50],n,i,k,c=0,j,k1;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    k1=k;
    for(j=0;j<n;j++)
    {   
        c=0;
        for(i=0;i<n;i++)
        {
            if(a[j]==a[i])
            {
               c++;
            }
        }
        if(c==k1)
        {
            printf("%d",a[j]);
            break;
        }
    }
    return 0;
}
