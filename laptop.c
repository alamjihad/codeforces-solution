#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b;
    for(int i=0;i<n;++i)
    {
       scanf("%d %d",&a,&b);
       if(b<a)
       {
           printf("Happy Alex");
           return 0;
       }

    }
    printf("Poor Alex");
    return 0;
}
