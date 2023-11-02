#include <stdio.h>
void ans()
{
    long long int a,b,c,m=-1;
    int s=-1;
    scanf("%lld %lld %lld",&a,&b,&c);
    if(a<c)
    {
        s=1;
    }
    if(b*a>c)
    {
        m=b;
    }
    printf("%d %d\n",s,m);
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
