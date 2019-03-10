#include <stdio.h>
int main() 
{
    int n,a[10],i,j,b[50],m,t,k,n1,p;
	scanf("%d",&n);
    scanf("%d",&m);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(j=0;j<m;j++)
	{
	    scanf("%d",&b[j]);
	}
	n1=n;
	for(k=0;b[k]!='\0';k++)
	{
	    a[n1]=b[k];
	    n1++;
	}
	for(p=0;p<n+m;p++)
	{
	for(i=0;i<n+m;i++)
	{
	    for(j=i+1;j<n+m;j++)
	    {
	        if(a[i]>a[j])
	        {
	            t=a[i];
	            a[i]=a[i+1];
	            a[i+1]=t;
	        }
	    }
	}
	}
	for(i=0;i<n+m;i++)
	{
	    printf("%d ",a[i]);
	}
	return 0;
}
