#include<stdio.h>
int main()
{
    int n,i,x=0;
    char s[4];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        if(s[1]=='+')
        {
            x=x+1;
        }
        else
        {
            x=x-1;
        }
    }
    printf("%d",x);
    return 0;
}
