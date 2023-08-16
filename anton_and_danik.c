#include<stdio.h>
int main()
{
    int i,n,a=0,d=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if (s[i]=='A')
        {
             a=a+1;
        }

        else
        {
             d=d+1;
        }

    }
    if(a>d)
    {
        printf("Anton");
    }
    else if (d>a)
    {
        printf("Danik");
    }
    else
    {
        printf("Friendship");
    }
    return 0;

}
