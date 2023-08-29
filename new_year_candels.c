#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a;
    while(a>=b)
    {
        c=c+(a/b);
        a=(a/b)+a%b;
    }
    printf("%d",c);
    return 0;
}
