#include<stdio.h>
int main ()
{
    char s[100];
    gets(s);
    int u=0,l=0,i;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]<97)
        {
            u++;
        }
        else
        {
            l++;
        }
    }
    if(u<=l)
    {
         for(i=0;s[i]!='\0';i++)
         {
            if(s[i]<97)
            {
                s[i]=s[i]+32;
            }
         }
    }


         //for(i=0;s[i]='\0';i++)
         //{
             /*/if(s[i]<97)
             {
                s[i]=s[i]+32;*/

         //}


    else
    {
        for(i=0;s[i]!='\0';i++)
        //{
            if(s[i]>=97)
            {
                s[i]=s[i]-32;
            }
        //}
    }
    printf("%s",s);
    return 0;
}
