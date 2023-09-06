#include<stdio.h>
int main()
{
    int t,n,x;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        scanf("%d",&n);
        int odd=0,even=0,sum=0;
        for(int i=0;i<n;++i)
        {
            scanf("%d",&x);
            sum+=x;
            if(x%2==1)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
        if(sum%2==1)
        {
            printf("YES\n");
        }
        else
        {
            if(odd>=1&&even>=1)
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
