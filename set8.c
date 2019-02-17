#include <stdio.h>
int main(void) 
{
int n,i,res,a[20],t;
char rn[10];
scanf("%[^\n]s",rn);
n=strlen(rn);
rn[0]=rn[0]-32;
for(i=1;i<n;i++)
{
    if(rn[i]==' ')
    {
        rn[i+1]=rn[i+1]-32;
    }
}
printf("%s",rn);
return 0;
}
