#include <stdio.h>

int main()
{
    int n,i,a[50],k,j;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    while(k>0)
    {
        for(i=n;i>=0;i--)
        {
            a[n]='*';
        }
        n--;
        k--;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!='*')
        {
            printf("%d ",a[i]);
        }
    }
    
    return 0;
}
