#include<stdio.h>
int main()
{
    int a,b,c,d,l=0;
    char str[100000];
    scanf("%d %d %d %d",&a,&b,&c,&d);
    scanf("%s",&str);
    int s=0;
    int i=0;
    while(str[i]!='\0')
    {
        i++;
        l++;
    }
    for(int i=0;i<l;++i)
    {
        if(str[i]=='1')
        {
            s=s+a;
        }
        else if(str[i]=='2')
        {
            s=s+b;
        }
        else if(str[i]=='3')
        {
            s=s+c;
        }
        else if(str[i]=='4')
        {
            s=s+d;
        }
    }
    printf("%d",s);
    return 0;
}
