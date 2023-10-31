#include <stdio.h>
void ans(int n,int t)
{
    if(n==1&&t==10)
    {
        printf("-1");
        return;
    }
    if(t==10)
    {
        printf("1");
        for(int i=0;i<n-1;++i)
        {
            printf("0");
        }
    }
    else
    {
        for(int i=0;i<n;++i)
        {
            printf("%d",t);
        }
    }
}
int main() 
{
    int n,t;
    scanf("%d %d",&n,&t);
    ans(n,t);
    return 0;
}