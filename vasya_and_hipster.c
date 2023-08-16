#include<stdio.h>
int main()
{
    int a,b,s;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("%d",b);
    }
    else
    {
        printf("%d",a);
    }
    s=a-b;
    if(s>0)
    {
        printf(" %d",s/2);
    }
    else
    {
        s=s*(-1);
        printf(" %d",s/2);
    }
    return 0;
}
