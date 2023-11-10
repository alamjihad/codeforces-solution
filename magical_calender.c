#include<stdio.h>
void ans()
{
    long long int n,r,s=0;
    scanf("%lld %lld",&n,&r);
    if(n>r)
    {
        s=(r*(r+1))/2;
    }
    else
    {
        s=(n*(n-1))/2+1;
    }
    printf("%lld\n",s);
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        ans();
    }
}
