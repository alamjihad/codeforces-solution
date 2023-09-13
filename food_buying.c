#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        long long int s;
        int ans=0,d,p;
        scanf("%lld",&s);
        while(s>0)
        {
            d=(s/10)*10;
            ans+=d;
            p=s-d;
            s=(s/10)+p;
            if(s<10)
            {
                ans+=s;
                break;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
