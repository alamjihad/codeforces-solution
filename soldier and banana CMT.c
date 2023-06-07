#include<stdio.h>
int main()
{
    long long int k,w,n,t,m;
    scanf("%lld %lld %lld",&k,&n,&w);
    m=(w*(w+1))/2;
    t=k*m;
    if(n<t)
    {
        printf("%lld",t-n);
    }
    else
    {
        printf("0");
    }
    return 0;
}
