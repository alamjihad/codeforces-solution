#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        int n,c,x;
        scanf("%d",&n);
        c=0;
        x=n;
        if(x<10)
        {
            printf("%d\n",x);
            continue;
        }
        for(x=n;x>0;x=x/10)
        {
            c++;
        }
        int f=0;
        while(c>0)
        {
            f=f*10+1;
            c--;
        }
        int s=0;
        if(f<=n)
        {
            s=s+n/f;
        }
        f=f/10;
        while(f>0)
        {
            s=s+9;
            f=f/10;
        }
        printf("%d\n",s);
    }
    return 0;
}
