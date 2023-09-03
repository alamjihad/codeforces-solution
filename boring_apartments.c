#include<stdio.h>
int main()
{
    int t,a,s;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&a);
        int d,c,A;
        A=a;
        d=a%10;
        c=0;
        while(a>0)
        {
            a=a/10;
            c++;
        }
        if(c==1)
        {
            s=((d*10)-10)+1;
        }
        else if(c==2)
        {
            s=((d*10)-10)+3;
        }
        else if(c==3)
        {
            s=((d*10)-10)+6;
        }
        else if(c==4)
        {
            s=((d*10)-10)+10;
        }
        printf("%d\n",s);
    }
    return 0;
}
