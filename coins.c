#include<stdio.h>
int main()
{
    int t,i;
    long long int n,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld",&n,&k);
        if(n%2!=0 && k%2==0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}
