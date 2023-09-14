#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        long long int temp,remain,ans;
        temp=a-b;
        if(temp<0)
        {
            temp=temp*(-1);
        }
        else
        {
            temp=temp;
        }
        remain=temp/2;
        ans=(remain+c-1)/c;
        if(ans*c == remain && temp%2!=0)
        {
            ans++;
        }
        printf("%lld\n",ans);
    }
}
