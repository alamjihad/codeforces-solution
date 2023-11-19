#include<stdio.h>
void ans()
{
    int n,x,even=0,odd=0,k;
    scanf("%d %d",&n,&x);
    for(int i=0;i<n;++i)
    {
        scanf("%d",&k);
        if(k%2!=0)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
    if(odd==0)
    {
        printf("NO\n");
        return;
    }
    for(int i=1;i<=odd;i=i+2)
    {
        if(i>x)
        {
            break;
        }
        if((x-i)<=even)
        {
            printf("YES\n");
            return;
        }
    }
    printf("NO\n");
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        ans();
    }
}
