#include <stdio.h>
void ans(int n,int m)
{
    int a,y,x,p=0;
    for(int i=0;i<n;++i)
    {
        scanf("%d",&a);
        y=(a+m-1)/m;
        if(y>=p)
        {
            x=i;
            p=y;
        }
    }
    printf("%d",x+1);
}
int main() 
{
    int n,m;
    scanf("%d %d",&n,&m);
    ans(n,m);
    return 0;
}