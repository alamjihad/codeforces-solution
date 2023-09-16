#include<stdio.h>
int main()
{
    long long int n;
    int m;
    scanf("%lld",&n);
    if(n==0)
    {
        printf("%d",1);
        return 0;
    }
    m=n%4;
    if(m==0)
    {
          printf("%d",6);
    }
    else if(m==1)
    {
        printf("%d",8);
    }
    else if(m==2)
    {
        printf("%d",4);
    }
    else if(m==3)
    {
        printf("%d",2);
    }
    return 0;
}
