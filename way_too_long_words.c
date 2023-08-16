#include<stdio.h>
int main()
{
    int n,i,s=0;
    char t[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",t);
        s=strlen(t);
        if(s>10)
        {
            printf("%c%d%c",t[0],s-2,t[s-1]);
        }
        else
        {
            printf("%s",t);

        }
        printf("\n");
    }
    return 0;
}
