#include<stdio.h>
int main()
{
    int t,n,s;
    char str[101];
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        scanf("%d",&n);
        scanf("%s",&str);
        s=0;
        for(int i=0;i<n;++i)
        {
            if(str[i]>s)
            {
                s=str[i];
            }
        }
        printf("%d\n",s-'a'+1);
    }
    return 0;
}

