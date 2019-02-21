#include <stdio.h>

int main()
{
    char a[50];
    int i,c=0,n;
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='(')
        {
            c++;
        }
        if(a[i]==')')
        {
            c--;
        }
    }
    if(c==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
