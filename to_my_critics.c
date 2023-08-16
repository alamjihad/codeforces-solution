#include<stdio.h>
int main()
{
    int t,a,b,c;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        scanf("%d %d %d",&a,&b,&c);

        if(a+b==10)
        {
            printf("YES\n");
        }
        else if(c+b==10)
        {
            printf("YES\n");
        }
        else if(a+c==10)
        {
            printf("YES\n");
        }
        else if(a+b>10)
        {
            printf("YES\n");
        }
        else if(c+b>10)
        {
            printf("YES\n");
        }
        else if(a+c>10)
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
