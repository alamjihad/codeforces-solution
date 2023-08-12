#include<stdio.h>
int main()
{
    int t,arr[100],n,i,j;
    scanf("%d",&t);
    for(j=0;j<t;++j)
    {
        int s=0;
        scanf("%d",&n);
        for(i=0;i<n;++i)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<n;++i)
        {
            s=s+arr[i];
        }
        if(s%2==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
