#include<stdio.h>
void res()
{
        int n,k,d,w;
        scanf("%d %d %d %d",&n,&k,&d,&w);
        int arr[300000];
        for(int i=0;i<n;++i)
        {
            scanf("%d",&arr[i]);
        }
        int w1=-1,count=0,ans=0;
        for(int i=0;i<n;++i)
        {
            if(arr[i]<=w1+d&&count>0)
            {
                count--;
            }
            else
            {
                w1=arr[i]+w;
                count=k-1;
                ans+=1;
            }
        }
        printf("%d\n",ans);
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int j=0;j<t;++j)
    {
        res();
    }
    return 0;
}
