#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int t=240-k;
    int l=0,h=n,ans=0;
    while(l<=h)
    {
        int m=(l+h)/2;
        int s=0.5*m*(2*5+(m-1)*5);
        if(s>t)
        {
            h=m-1;
        }
        else if(s<t)
        {
            l=m+1;
            ans=m;
        }
        else
        {
            ans=m;
            break;
        }
    }
    printf("%d",ans);
    return 0;
}
