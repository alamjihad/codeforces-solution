#include<stdio.h>
int main()

{
    int n,m,a,b;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    if(m*a>b)
    {
        int x=(n%m)*a;
        int c,d;
        if(x>b)
        {
            c=n/m*b+b;
            printf("%d",c);
        }
        else
        {
            d=n/m*b+x;
            printf("%d",d);
        }
    }
    else
    {
        printf("%d",n*a);
    }
    return 0;
}
