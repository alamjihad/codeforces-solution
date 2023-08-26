#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d %d %d %d",&n,&a,&b,&c);
    int t=0,f=0,m;
    for(int i=0;i<=n;++i)
    {
        for(int j=0;j<=n;++j)
        {
            m=i*a+j*b;
            if(m<=n)
            {
                if((n-m)%c==0)
                {
                    f=i+j+(n-m)/c;
                    if(f>t&&f!=0)
                    {
                        t=f;
                    }
                }
            }
        }
    }
    printf("%d",t);
    return 0;
}

