#include <stdio.h>
void ans(int n)
{
    if(n%3==0)
    {
        printf("Second\n");
    }
    else if((n%3==1) ||(n%3==2) )
    {
        printf("First\n");
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        int n;
        scanf("%d",&n);
        ans(n);
    }
    return 0;
}