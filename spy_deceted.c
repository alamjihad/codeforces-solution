#include<stdio.h>
int main()
{
    int t;
    int arr[10000];
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;++i)
        {
            scanf("%d",&arr[i]);
        }
        if(arr[0]!=arr[1] && arr[1]==arr[2])
        {
            printf("1\n");
        }
        else
        {
            int x=arr[0];
            for(int i=0;i<n;++i)
            {
                if(arr[i]!=x)
                {
                    printf("%d\n",i+1);
                    break;
                }
            }
        }
    }
    return 0;
}
