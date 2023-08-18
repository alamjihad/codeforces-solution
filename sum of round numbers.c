#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i=0;i<t;++i)
    {
        int n,m;
        scanf("%d",&n);
        int arr[6];
        int t=0;m=1;
        for(int i=1;i<6;++i)
        {
            arr[i]=n%10;
            n=n/10;
            if(arr[i]!=0)
            {
                t++;
            }
        }
        printf("%d\n",t);
        for(int j=1;j<6;++j)
        {
            if(arr[j]!=0)
            {
                printf("%d ",arr[j]*m);
            }
            m=m*10;
        }
        printf("\n");
    }
    return 0;
}
