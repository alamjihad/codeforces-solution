#include<stdio.h>
void result(int n)
{
    int i,array[8];
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
}
int main()
{
    int n;
    scanf("%d",&n);
    result(n);
    return 0;
}

