#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        int c=0,n;
        scanf("%d",&n);
        while(n>2020)
        {
            n=n-2020;
            c++;
        }
        if(n%2020==0 || n%2021==0 || c>=n%2020)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
