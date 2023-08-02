#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l=0;
    char str[101];
    char srt[101];
    scanf("%s",&str);
    scanf("%s",&srt);
    l=strlen(str);
   /* printf("%s\n",str);
    printf("%s\n",srt);*/
    for( i=0;i<=l-1;i++)
    {
        if(str[i]==srt[i])
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }
    //printf("%d",l);
    return 0;
}
