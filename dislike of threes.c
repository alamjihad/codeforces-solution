#include<stdio.h>
int main()
{
    int t,k;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        scanf("%d",&k);
        int j=0,s=0,a=1;
        while(j<k)
        {
            if(a%3!=0&&a%10!=3)
            {
                s=a;
                j++;
            }
            a++;
        }
        printf("%d\n",s);
    }
    return 0;
}
