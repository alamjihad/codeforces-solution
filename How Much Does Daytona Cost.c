#include<stdio.h>
void ans(int n,int k)
{
    int arr[110],f;
        for(int i=0;i<n;++i)
        {
            scanf("%d",&arr[i]);
        }
       /* printf("%d",k);
        return 0;*/
        for(int i=0;i<n;++i)
        {
            if(arr[i]==k)
            {
               /* printf("YES\n");
                break;*/
                f=1;
                break;
            }
            else
            {
               /* printf("NO\n");
                break;*/
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
