#include<stdio.h>
int main()
{
    int a,s[1000],y=0,n=0,i;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&s[i]);
        if(s[i]==1)
        {
            n++;
        }
        else
        {
           y++;
        }
    }
    if(n>0)
    {
        printf("HARD");
    }
    else
    {
        printf("EASY");
    }
    return 0;
}
