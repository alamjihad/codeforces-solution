#include<stdio.h>
int main()
{
    int t,y;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a==b)
        {
            printf("0\n");
        }
        else
        {
            y=a-b;
            if(y>0)
            {
                if(y%10==0)
                {
                    printf("%d\n",y/10);
                }
                else
                {
                    printf("%d\n",(y/10)+1);
                }
            }
            else if(y<0)
            {
                y=(-1)*y;
                if(y%10==0)
                {
                    printf("%d\n",y/10);
                }
                else
                {
                    printf("%d\n",(y/10)+1);
                }
            }
        }
    }
    return 0;
}
