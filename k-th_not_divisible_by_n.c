#include<stdio.h>
void ans(long long int n,long long int k)
{
    long long int s;
    s=(k-1)/(n-1)+k;
    printf("%lld\n",s);
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        long long int n,k;
        scanf("%lld %lld",&n,&k);
        ans(n,k);
    }
    return 0;
}