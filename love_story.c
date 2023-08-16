#include<stdio.h>
int main()
{
    int t,i,j,l=0;
   // scanf("%d",n);
    char p[11],a[]="codeforces";
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        l=0;
       // printf("%d",j);
        scanf("%s",&p);
        for(i=0;i<10;i++)
        {
            if(p[i]!=a[i])
            {
                l++;
            }
        }
        printf("%d\n",l);
    }
    return 0;
}
