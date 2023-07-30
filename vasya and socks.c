#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int s=0;
    while(n>=m)
    {
        s+=m;
        n-=m;
        n++;
    }
    printf("%d",s+n);
    return 0;
}
