#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=0)
    {
        printf("%d",n);
    }
    else
    {
        int a,b;
        a=n/10;
        b=n/100*10+n%10;
        if(a>b)
        {
            printf("%d",a);
        }
        else
        {
            printf("%d",b);
        }
    }
    return 0;
}
