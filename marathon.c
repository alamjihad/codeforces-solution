#include<stdio.h>
int main()
{
    int t,a,b,c,d,s,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a<b&&a<c&&a<d)
        {
            s=3;
        }
        else if(a<b&&a<c||a<b&&a<d||a<c&&a<d)
        {
            s=2;
        }
        else if(a<b||a<c||a<d)
        {
            s=1;
        }
        else
        {
            s=0;
        }
        printf("%d\n",s);
    }
   // printf("%d\n",s);
    return 0;
}
