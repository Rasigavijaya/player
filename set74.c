#include <stdio.h>
int main()
{
    int n,k,a=1;
    scanf("%d %d",&n,&k);
    while(k>0)
    {
        a=a*n;
        k--;
    }
    printf("%d",a);
    return 0;
}
