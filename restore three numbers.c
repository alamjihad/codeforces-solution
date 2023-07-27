#include<stdio.h>
int main()
{
    int ar[4],l=0;
    for(int i=0;i<4;++i)
    {
        scanf("%d",&ar[i]);
        if(l<ar[i])
        {
            l=ar[i];
        }
    }
    for(int i=0;i<4;++i)
    {
        if((l!=ar[i]))
        {
            printf("%d",l-ar[i]);
        }
    }
    return 0;
}
