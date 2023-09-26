#include<stdio.h>
void ans(int n)
{
        int s[500000],e[110];
        for(int i=0;i<n;++i)
        {
            scanf("%d %d",&s[i],&e[i]);
        }
        for(int i=1;i<n;++i)
        {
            if(s[0]<=s[i])
            {
                if(e[0]<=e[i])
                {
                    printf("-1\n");
                    return;
                }

            }
        }
        printf("%d\n",s[0]);
}
int main()
{
    int t,n,m;
    scanf("%d",&t);
    for(int k=0;k<t;++k)
    {
        scanf("%d",&n);
        ans(n);
    }
    return 0;
}
