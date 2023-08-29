#include<stdio.h>
int main()
{
    int t,n,f=0;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        scanf("%d",&n);
        char str1[100];
        char str2[100];
        scanf("%s",&str1);
        scanf("%s",&str2);
        for(int i=0;i<n;++i)
        {
            if(str1[i]==str2[i])
            {
                f=0;
            }
            else if((str1[i]=='R' && str2[i]!='R') || (str2[i]=='R' && str1[i]!='R'))
            {
                f=1;
                break;
            }
            else
            {
                f=0;
            }
        }
        if(f==1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}
