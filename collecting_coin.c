#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        int a,b,c,n,s;
        scanf("%d %d %d %d",&a,&b,&c,&n);
        s=a+c+b+n;
        if(s%3!=0)
        {
            printf("NO\n");
        }
        else
        {
            if(a>s/3|| b>s/3|| c>s/3)
            {
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
            }
        }
    }
    return 0;
}
