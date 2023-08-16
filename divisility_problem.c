#include<stdio.h>
int main()
{
    int t,c;
    long long int a,b;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        scanf("%lld %lld",&a,&b);
        if(a%b==0)
        {
            printf("0\n");
        }
        else
        {
            c=b-(a%b);
            printf("%d\n",c);
        }
    }
    return 0;
}
