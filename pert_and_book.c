#include<stdio.h>
int main()
{
    int n,i,array[8];
    scanf("%d",&n);
    for(i=0;i<7;++i)
    {
        scanf("%d",&array[i]);
    }
    while(n>0)
    {
        i=0;
        for(i=0;i<7&&n>0;++i)
        {
            n=n-array[i];
        }
    }
    printf("%d",i);
    return 0;
}
