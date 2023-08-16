#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        if(i%4==2)
        {
            for(int i=1;i<m;i++)
            {
                printf(".");
            }
            printf("#");
        }
        else if(i%4==0)
        {
            printf("#");
            for(int i=1;i<m;i++)
            {
                printf(".");
            }
        }
        else
        {
            for(int i=1;i<=m;i++)
            {
                printf("#");
            }
        }
        printf("\n");
    }
    return 0;
}
