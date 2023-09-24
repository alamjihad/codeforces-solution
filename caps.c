#include<stdio.h>
int main()
{
    int c=0,d=0,l=0;
    char str[105];
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        l++;
    }
    for(int i=1;i<l;i++)
    {
        if(str[i]>=97)
        {
            c++;
        }
    }
    for(int i=0;i<l;i++)
    {
        if(str[i]<97)
        {
            d++;
        }
    }
    if(str[0]>=97&&c==0)
    {
        str[0]=str[0]-32;
        for(int i=1;i<l;i++)
        {
            str[i]=str[i]+32;
        }
        printf("%s",str);
        return 0;
    }
    if(d==l)
    {
        for(int i=0;i<l;i++)
        {
            str[i]=str[i]+32;
        }
        printf("%s",str);
    }
    else
    {
        printf("%s",str);
    }
    return 0;
}
