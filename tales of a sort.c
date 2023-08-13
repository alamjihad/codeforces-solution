#include<stdio.h>
int main()
{
    int t,n,i;
    int arr[1000];
    scanf("%d",&t);
    for(int j=0;j<t;++j)
    {
        scanf("%d",&n);
        for(i=0;i<n;++i)
        {
            scanf("%d",&arr[i]);
        }
        int s=0;
        for(i=1;i<n;++i)
        {
            if(arr[i]<arr[i-1])
            {
                if(s<arr[i-1])
                {
                    s=arr[i-1];
                }
            }
        }
        printf("%d\n",s);
    }
    return 0;
}
