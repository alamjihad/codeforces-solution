#include<stdio.h>
int main()
{
    int n,a,b,c,d,s;
    scanf("%d",&n);
    while(1)
    {
        n++;
        s=n;
        a=n%10;
        n=n/10;
        b=n%10;
        n=n/10;
        c=n%10;
        n=n/10;
        d=n%10;
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
        {
            printf("%d",s);
            break;
        }
        n=s;
    }
    return 0;
}
