#include<stdio.h>
int main()
{
    int arr[500],n;
    int t,i,j;
    scanf("%d",&t);
    for(j=0;j<t;++j)
    {
        scanf("%d",&n);
        for(i=0;i<n;++i)
        {
            scanf("%d",&arr[i]);
        }
        int e=0,o=0;
        for(i=0;i<n;++i)
        {
            if(arr[i]%2==0)
            {
                e=e+arr[i];
            }
            else
            {
                o=o+arr[i];
            }
        }
        if(e>o)
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
