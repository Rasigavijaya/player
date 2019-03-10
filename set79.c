#include <stdio.h>
int main() 
{
    int n,a[50],i,j,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]-a[i]>m)
            {
                m=a[j]-a[i];
            }
        }
    }
    printf("%d",m);
	return 0;
}
