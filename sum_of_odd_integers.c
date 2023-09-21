#include<stdio.h>
int main()
{
    int t;
    long long n,k;
    scanf("%d",&t);
    for (int i=0;i<t;++i)
    {
        scanf("%lld %lld",&n,&k);
        if(n%2==k%2&&k*k<=n)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
