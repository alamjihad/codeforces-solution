#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    if(n%2==1)
    {
        printf("%d %d",n/2,n/2+1);
    }
    else if((n/2)%2==1)
    {
        printf("%d %d",n/2-2,n/2+2);
    }
    else
    {
        printf("%d %d",n/2-1,n/2+1);
    }
    return 0;
}
