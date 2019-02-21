
int main()
{
    char a[50];
    int n,i;
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            a[i]=a[i]+32;
        }
        if(a[i]>=97 && a[i]<=122)
        {
            a[i]=a[i]-32;
        }
    }
    printf("%s",a);
    return 0;
}

