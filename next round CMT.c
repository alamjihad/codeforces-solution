#include<stdio.h>
int main()
{
    int n,k,t=0,i,a[50];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=0;i<n;i++)
        {
            if(a[i]>=a[k-1]&&a[i]>0)
            {
                t=t+1;
            }
        }
    printf("%d",t);
    return 0;
}
