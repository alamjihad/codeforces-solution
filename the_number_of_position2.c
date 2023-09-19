#include<stdio.h>
void result(int n,int a,int b)
{
    if((n-a)>(b+1))
    {
        printf("%d",b+1);
    }
    else
    {
        printf("%d",n-a);
    }
}
int main()
{
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    result(n,a,b);
    return 0;
}
