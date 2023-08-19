#include<stdio.h>
int main()
{
    int t,n,m,k,x,y;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        int a,b;
        scanf("%d %d %d",&n,&m,&k);
        scanf("%d %d",&x,&y);
        int s=0,c,d;
        for(int j=0;j<k;++j)
        {
            scanf("%d %d",&a,&b);
            c=(x-a);
            if(c<0)
            {
                c=c*(-1);
            }
            d=(y-b);
            if(d<0)
            {
                d=d*(-1);
            }
            if((c+d)%2==0)
            {
                s=1;
            }
        }
        if(s==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
 return 0;
}
