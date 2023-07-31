#include<stdio.h>
int main()
{
    int s=0,t;
    char str[100];
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        scanf("%s",&str);
        if(str[0]=='T')
        {
            s=s+4;
        }
        else if(str[0]=='O')
        {
            s=s+8;
        }
        else if(str[0]=='C')
        {
            s=s+6;
        }
        else if(str[0]=='D')
        {
            s=s+12;
        }
        else if(str[0]=='I')
        {
            s=s+20;
        }
    }
    printf("%d",s);
    return 0;
}
