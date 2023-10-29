#include<stdio.h>
void ans()
{
    int n,a,b,s=1,m=1;
    scanf("%d",&n);
    scanf("%d %d",&a,&b);
    for(int i=1;i<n;++i)
    {
        int c,d;
        scanf("%d %d",&c,&d);
        if(c==a&&d==b)
        {
            s++;
        }
        else
        {
            s=1;
        }
        if(s>m)
        {
            m=s;
        }
        a=c;
        b=d;
    }
    printf("%d",m);
}
int main()
{
    ans();
    return 0;
}