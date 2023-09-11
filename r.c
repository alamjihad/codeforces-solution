#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        long long int x,y,a,b,total=0;
        scanf("%lld %lld %lld %lld",&x,&y,&a,&b);
       /* printf("x=%lld y=%lld a=%lld b=%lld t=%d",x,y,a,b,t);
        return 0;*/
        if(x>y)
        {
            int temp=0;
            temp=x;
            x=y;
            y=temp;
        }
        total+=a*(y-x);
        if(2*a<b)
        {
            total+=x*(2*a);
        }
        else
        {
            total+=x*b;
        }
        printf("%lld\n",total);
    }
    return 0;
}
