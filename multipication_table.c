#include<stdio.h>
int main()
{
    long long int n,x;
    scanf("%lld %lld",&n,&x);
    int ans=0;
    for(int i=1;i<=n;++i)
    {
        if(x%i==0 && (x/i)<=n)
        {
            ans++;
        }
    }
    printf("%d",ans);
    return 0;
}
