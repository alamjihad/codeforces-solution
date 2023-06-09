#include<stdio.h>
int main()
{
    int i,j,l,temp;
    char s[100];
    gets(s);
    l=strlen(s);
    for(i=0;i<l-1;i++)
    {
        for(j=0;j<l-1;j++)
        {
            if(s[j]!='+')
            {
               if (s[j]>s[j+2])
                {
                    char temp=s[j];
                    s[j]=s[j+2];
                    s[j+2]=temp;
                }
            }

        }
    }
    puts(s);
    return 0;
}
