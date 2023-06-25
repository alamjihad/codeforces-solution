#include<stdio.h>
int main()
{
    int t,n,a,b,c,s,m;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        scanf("%d %d %d",&a,&b,&c);
        s=abs(a-1);
        m=abs(b-c)+(c-1);
        if(s==m)
        {
            printf("3\n");
        }
        else if(s<m)
        {
            printf("1\n");
        }
        else
        {
            printf("2\n");
        }
    }
    return 0;
}
