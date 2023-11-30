#include<stdio.h>
void ans()
{
    int n,k,arr[110];
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;++i)
    {
        if(k==1&&arr[i]>arr[i+1])
        {
            printf("NO\n");
            return ;
        }
    }
    printf("YES\n");
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        ans();
    }
}
