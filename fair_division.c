#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    for(int j=0;j<t;++j)
    {
        scanf("%d",&n);
        long long int t=0,o=0,m,sum;
        for(int i=0;i<n;++i)
        {
            scanf("%lld",&m);
            if(m==1)
            {
                o++;
            }
            else
            {
                t++;
            }
        }
        sum=o*1+t*2;
        if(sum%2==1 || o%2==1)
        {
            printf("NO\n");
        }
        else
        {
            if(t%2==1)
            {
                if(o>=2 && o%2==0)
                {
                    printf("YES\n");
                }
                else
                {
                    printf("NO\n");
                }
            }
            else
            {
                printf("YES\n");
            }
        }
    }
    return 0;
}
