#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;++i)
    {
        int x,y,n,p,k;
        scanf("%d %d %d",&x,&y,&n);
        p=(n-y)/x;
        k=p*x+y;
        printf("%d\n",k);
    }
    return 0;
}
