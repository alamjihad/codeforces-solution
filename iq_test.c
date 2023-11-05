#include<stdio.h>
int main()
{
    int n,arr[110],e=0,o=0;
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    if(e>o)
    {
        for(int i=0;i<n;++i)
        {
            if(arr[i]%2!=0)
            {
                printf("%d",i+1);
                break;
            }
        }
    }
    else
    {
        for(int i=0;i<n;++i)
        {
            if(arr[i]%2==0)
            {
                printf("%d",i+1);
                break;
            }
        }
    }
    return 0;
}
