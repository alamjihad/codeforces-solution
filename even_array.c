#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int j=0;j<t;++j)
    {
        int arr[45],n;
        int o=0,e=0;
        scanf("%d",&n);
        for(int i=0;i<n;++i)
        {
            scanf("%d",&arr[i]);
            if(i%2!=arr[i]%2)
            {
                if(arr[i]%2)
                {
                    o++;
                }
                else
                {
                    e++;
                }
            }
        }
        if(o!=e)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n",o);
        }

    }
    return 0;
}
