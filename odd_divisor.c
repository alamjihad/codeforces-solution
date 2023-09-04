#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        long long int n,p;
        scanf("%lld",&n);
        if(n%2==1)
        {
            printf("YES\n");
        }
        else
        {
            p=n;
            while((p%2==0))
            {
                p=p/2;
            }
            if(p>1)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}


