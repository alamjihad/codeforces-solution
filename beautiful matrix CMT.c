#include<stdio.h>
int main()
{
    int i,j,a[6][6],r,c;
    for(i=1;i<6;i++)
    {
        for(j=1;j<6;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {
                r=abs(3-i);
                c=abs(3-j);
                printf("%d",r+c);
            }
        }
    }

    return 0;
}
