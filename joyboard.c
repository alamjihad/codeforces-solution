#include<stdio.h>
int ans()
{
    int n,m,k,c,s,d,e,f;
    scanf("%d %d %d",&n,&m,&k);
    c=m-n+1;
    s=m/n;
    if(k>3)
    {
        printf("%d\n",0);
    }
    else if(k==3)
    {
        if(0>c-s)
        {
            d=0;
        }
        else
        {
            d=c-s;
        }
        printf("%d\n",d);
    }
    else if(k==2)
    {
        if(s-1>0)
        {
            e=s-1;
        }
        else
        {
            e=0;
        }
        if(m<n)
        {
            f=m;
        }
        else
        {
            f=n;
        }
        printf("%d\n",e+f);
    }
    else if(k==1)
    {
        printf("%d\n",1);
    }
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
