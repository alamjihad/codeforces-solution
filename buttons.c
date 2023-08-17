#include<stdio.h>
int main()
{
    int t,i,k;
    scanf("%d",&t);
    for(i=0;i<t;++i)
    {
        int a,b,c;
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        k=c/2;
        a=a+c-k;
        b=b+k;
        if(a>b)
        {
            printf("First\n");
        }
        else
        {
            printf("Second\n");
        }
    }

    return 0;
}
