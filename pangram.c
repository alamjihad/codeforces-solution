#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    char str[101];
    scanf("%s",&str);
    int c[26]={0};
    for(int i=0;i<n;++i)
    {
        if(str[i]<97)
        {
            str[i]=str[i]+32;
            c[str[i]-'a']+=1;
        }
        else
        {
            c[str[i]-'a']+=1;
        }
    }
    for(i=0;i<26;++i)
    {
        if(c[i]==0)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
