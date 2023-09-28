#include<stdio.h>
int ans(int n,int m)
{
    int result=-1,d;
    if(m%n==0)
    {
        result=0;
        d=m/n;
        while(d%2==0)
        {
            d=d/2;
            result++;
        }
        while(d%3==0)
        {
            d=d/3;
            result++;
        }
        if(d!=1)
        {
            result=-1;
        }
    }
    return result;
}
int main()
{
    int n,m,d,result;
    scanf("%d %d",&n,&m);
    if(n==m)
    {
        printf("0");
        return 0;
    }
    result=ans(n,m);
    printf("%d",result);
    return 0;
}
