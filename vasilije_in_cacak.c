#include<stdio.h>
void ans()
{
    long long int n,k,x;
    scanf("%lld %lld %lld",&n,&k,&x);
    if(k*(k+1)/2>x||(n-k+1+n)*k/2<x)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        ans();
    }
    return 0;
}
