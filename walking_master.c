#include<stdio.h>
int main()
{
    int t,a,b,c,d,x;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(d<b)
        {
            printf("-1\n");
        }
        else
        {
            x=d-b;
            if(a+x>=c)
            {
                printf("%d\n",x+((a+x)-c));
            }
            else
            {
                printf("-1\n");
            }
        }
    }
    return 0;
}
