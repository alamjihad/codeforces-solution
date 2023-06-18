#include<stdio.h>
int main()
{
    int t,x,k,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&x,&k);
        if(x<k||x%k!=0)
        {
            //printf("1");
            printf("%d %d\n",1,x);
        }
        else
        {
            printf("%d\n",2);
            printf("%d %d\n",x-1,1);
        }
    }
    return 0;
}
