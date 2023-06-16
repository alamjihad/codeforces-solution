#include<stdio.h>
int main()
{
    int long long t,n,s;
    int i;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        s=(n+1)*(n+1)+1;
        printf("%lld\n",s);
    }
    return 0;
}
