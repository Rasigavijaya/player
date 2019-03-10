#include <stdio.h>

int main()
{
	int n,res,bin=0,t=1;
	scanf("%d",&n);
	while(n>=1)
	{
	    res=n%10;
	    bin=res*t+bin;
	    n=n/10;
	    t=t*2;
	}
	printf("%x",bin);
	return 0;
}
