#include<stdio.h>
int main()
{
    int t,x,y,z,temp;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        scanf("%d %d %d",&x,&y,&z);
        if(x>y)
        {
            temp=x;
            x=y;
            y=temp;
        }
        if(x>z)
        {
            temp=x;
            x=z;
            z=temp;
        }
        if(y>z)
        {
            temp=y;
            y=z;
            z=temp;
        }
        if(y!=z)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
            printf("%d %d %d\n",x, x, z);
        }
    }
    return 0;
}
