#include<stdio.h>
int main()
{
    int t;
    char str[10];
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        scanf("%s",&str);
        if(str[0]+str[1]+str[2]==str[3]+str[4]+str[5])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
