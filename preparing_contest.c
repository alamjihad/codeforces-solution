#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int k=0;k<t;++k)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        for(int i=n-k;i<=n;++i)
        {
            printf("%d ",i);
        }
        for(int j=n-k-1;j>=1;j--)
        {
            printf("%d ",j);
        }
    }
    return 0;
}
