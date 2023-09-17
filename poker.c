#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        long long int n,m,k,x,q;
        scanf("%lld %lld %lld",&n,&m,&k);
        x=n/k;
        if(x>=m)
        {
            printf("%lld\n",m);
        }
        else
        {
            q=((m-x)/(k-1));
            if((m-x)%(k-1)!=0)
            {
                q++;
            }
            printf("%d\n",x-q);
        }
    }
    return 0;
}
