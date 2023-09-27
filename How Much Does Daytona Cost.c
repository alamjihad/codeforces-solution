#include<stdio.h>
void ans(int n,int k)
{
    int arr[110],f;
        for(int i=0;i<n;++i)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<n;++i)
        {
            if(arr[i]==k)
            {
                f=1;
                break;
            }
            else
            {
                f=0;
            }
        }
        if(f==1)
        {
             printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
}
int main()
{
    int n,t,k;
    scanf("%d",&t);
    for(int j=0;j<t;++j)
    {
        scanf("%d %d",&n,&k);
        ans(n,k);
    }
    return 0;
}
