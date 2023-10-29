#include <stdio.h>
void ans(int n)
{
    if(n%2!=0)
    {
        printf("0");
        return;
    }
    else
    {
        long long int s=1;
        n=n/2;
        for(int i=0;i<n;++i)
        {
            s=s*2;
        }
        printf("%lld",s);
    }
}
int main() 
{
    int n;
    scanf("%d",&n);
    ans(n);
    return 0;
}