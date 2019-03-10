#include <stdio.h>

int main()
{
	int n,a[50],i,b[50],j=0,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    if(a[i]>a[i+1])
	    {
	      b[j]=a[i]; 
	      j++;
	    }
	    else
	    {
	      b[j]=a[i+1]; 
	      j++;
	    }
	}
	b[j]='\0';
	for(i=0;b[i]!='\0';i++)
	{
	    s=s+b[i];
	}
	printf("%d",s);
	return 0;
}
