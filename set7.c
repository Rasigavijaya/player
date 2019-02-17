#include <stdio.h>
int main(void) 
{
int n,i,res,a[20],t;
char rn[10];
scanf("%s",rn);
n=strlen(rn);
for(i=0;i<n;i++)
{
        t=rn[i];
        rn[i]=rn[i+1];
        rn[i+1]=t;
        i++;
}
printf("%s",rn);
return 0;
}
