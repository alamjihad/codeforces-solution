#include<stdio.h>
int main()
{
    int t,a,b,c;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        scanf("%d %d %d",&a,&b,&c);
        printf("%d\n",a+b);
    }
    return 0;
}
