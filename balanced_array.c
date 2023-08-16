#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        int n;
        scanf("%d",&n);
        if((n/2)%2!=0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
            int even=2;
            for(int i=1;i<=n/2;++i)
            {
                printf("%d\n",even);
                even=even+2;
            }
            even=even-2;
            int odd=1;
            for(int i=1;i<n/2;++i)
            {
                printf("%d\n",odd);
                odd=odd+2;
            }
            printf("%d\n",even+n/2-1);
        }
    }
    return 0;
}
