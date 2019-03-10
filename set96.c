#include <stdio.h>

int main()
{
    int n,c=0,i,n1,n2,n3,s=0,c1=1;
    scanf("%d",&n);
    n1=n;
    n2=n;
    n3=n;
    while(n1>0)
    {
        n1=n1/10;
        c++;
    }
    while(c-1>0)
    {
        c1=c1*10;
        c--;
    }
    n2=n2/c1;
    n3=n%10;
    s=n2+n3;
    printf("%d",s);
	return 0;
}
