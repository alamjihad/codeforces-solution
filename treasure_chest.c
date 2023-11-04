#include<stdio.h>
void ans(int x,int y,int k)
{
    int s,c;
    if(x>y)
    {
        printf("%d\n",x);
    }
    else if(x<y)
    {
        s=x+k;
        if(s==y)
        {
            printf("%d\n",s);
        }
        else if(s<y)
        {
            c=y-s;
            s=s+(c*2);
            printf("%d\n",s);
        }
        else if(s>y)
        {
            printf("%d\n",y);
        }
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        int x,y,k;
        scanf("%d %d %d",&x,&y,&k);
        ans(x,y,k);
    }
    return 0;
}
