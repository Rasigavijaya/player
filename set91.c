#include <stdio.h>

int main()
{
	int n,res,bin=0,t=1;
	scanf("%d",&n);
	while(n>=1)
	{
	    res=n%2;
	    bin=res*t+bin;
	    n=n/2;
	    t=t*10;
	}
	printf("%d",bin);
	return 0;
}
