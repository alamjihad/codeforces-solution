#include<stdio.h>
void ans()
{
    int n,k,c,s;
    scanf("%d %d",&n,&k);
    c=k-1;
    s=n-1;
    if(n%2==0)
    {
        printf("%d\n",c%n+1);
    }
    else
    {
        printf("%d\n",(c+(c/(s/2)))%n+1);
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
