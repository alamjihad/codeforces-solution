#include<stdio.h>
int main()
{
    int l,i,j;
    char s[100],a[200];
    gets(s);
    l=strlen(s);
    for(i=0,j=0;i<l;i++)
    {
        if(s[i]!='A'&&s[i]!='a'&&s[i]!='O'&&s[i]!='o'&&s[i]!='Y'&&s[i]!='y'&&s[i]!='E'&&s[i]!='e'&&s[i]!='U'&&s[i]!='u'&&s[i]!='I'&&s[i]!='i')
        {
            a[j]='.';
            j++;
            if(s[i]>=65&&s[i]<=90)
            {
                a[j]=s[i]+32;
                j++;
            }
            else
            {
                a[j]=s[i];
                j++;
            }
        }

    }
    a[j]='\0';
    printf(a);
    return 0;
}
