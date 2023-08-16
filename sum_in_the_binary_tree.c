#include<stdio.h>
int main()
{
    int t;
    long long int n;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        scanf("%lld",&n);
        long long int s=0;
        while(n!=0)
        {
            s=s+n;
            n=n/2;
        }
        printf("%lld\n",s);
    }
    return 0;
}
