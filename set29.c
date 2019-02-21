#include <stdio.h>

int main()
{
    int n,k,i,c=0,j,x;
    scanf("%d %d",&n,&k);
    for(i=n;i<=k;i++)
    {
        for(j=1;j<=k;j++)
        {
        x=j*j;
        if(i==x)
        {
            c++;
        }
        }
    }
    printf("%d",c);
    return 0;
}

