#include <stdio.h>

int main()
{
    int n,k,a[50],i;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            printf("yes");
            break;
        }
        else
        {
        }
    }
    return 0;
}
