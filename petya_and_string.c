#include<stdio.h>
int main()
{
    int i;
    char s[100],a[100];
    gets(s);
    gets(a);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>=97)
        {
            s[i]=s[i]-32;
        }
    }
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=97)
        {
            a[i]=a[i]-32;
        }
    }
    i=strcmp(s,a);
    printf("%d",i);
    return 0;
}
