#include <stdio.h>

int main()
{
    int n,a[50],i,j=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    k=a[0];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                k=a[i];
            }
        }
    }
    printf("%d",k);
    return 0;
}
