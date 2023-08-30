#include<stdio.h>
int main()
{
    long long int x, s=0;
    scanf("%lld",&x);
    while(x!=0)
    {
    if(x%2==1)
    {
        s++;
    }
    x=x/2;
    }
    printf("%d",s);
    return 0;
}
