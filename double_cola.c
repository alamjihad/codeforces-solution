#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    while(n>5)
    {
        n=n/2;
        n=n-2;
    }
    if(n==1)
    {
        printf("Sheldon");
    }
    else if(n==2)
    {
        printf("Leonard");
    }
    else if(n==3)
    {
        printf("Penny");
    }
    else if(n==4)
    {
        printf("Rajesh");
    }
    else if(n==5)
    {
        printf("Howard");
    }
    return 0;
}
