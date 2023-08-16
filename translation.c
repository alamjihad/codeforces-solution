#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,d=0;
    char s[101],t[101];
    scanf("%s",s);
    scanf("%s",t);
    l=strlen(s);
    for(i=0,j=l-1;i<l;i++,j--)
    {
       // for(j=l-1;i<l;j--)

           //{
                if(s[i]==t[j])
                {
                    d=1;
                }
                else
                {
                    d=0;
                    break;
                }
           //}
    }
    if(d==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
