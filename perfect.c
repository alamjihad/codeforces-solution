#include<stdio.h>
void ans()
{
    int x,y,z,c,temp,s;
    scanf("%d %d %d",&x,&y,&z);
    if(x<y)
    {
        c=x;
    }
    else
    {
        c=y;
    }
    if(c<=z)
    {
        s=c;
    }
    else
    {
        s=(x+y+z)/3;
        if(s>c)
        {
           temp=s;
           s=c;
        }
    }
    printf("%d\n",s);
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        ans();
    }
    return 0;
}
