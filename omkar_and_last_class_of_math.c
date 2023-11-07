#include<stdio.h>
void ans()
{
    int n,c=0,x,a,b,f=0;
    scanf("%d",&n);
    for(int i=2;i*i<=n;++i)
    {
        if(n%i==0)
        {
            a=n/i;
            b=n-a;
            f=1;
            break;
        }
    }
    if(f==0)
    {
        a=1;b=n-1;
    }
    printf("%d %d\n",a,b);
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