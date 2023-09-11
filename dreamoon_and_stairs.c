#include<stdio.h>
int main()
{
    int n,m,ans=0;
    scanf("%d %d",&n,&m);
    if(m>n)
    {
        ans=-1;
    }
    else
    {
        if(n%2==1)
        {
            ans=n/2+1;
        }
        else
        {
            ans=n/2;
        }
        while(ans%m>0)
        {
            ans++;
        }
    }
    printf("%d",ans);
    return 0;
}
