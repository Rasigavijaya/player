#include <stdio.h>
int main() 
{
    int n,a[50],i,m=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        m=(m)|(a[i]);
        
    }
    printf("%d",m);
	return 0;
}
