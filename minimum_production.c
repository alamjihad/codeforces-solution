// Online C compiler to run C program online
#include <stdio.h>
void ans()
{
    long long int a,b,x,y,n,s,m;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&x,&y,&n);   
    int m1,m2;
    if(a-n>=x)
    {
        m1=a-n;
    }
    else
    {
        m1=x;
    }
    if(b-n>=y)
    {
        m2=b-n;
    }
    else
    {
        m2=y;
    }
    if(m1<m2)
    {
        if(a-n>=x)
        {
            printf("%lld\n",(a-n)*b);
        }
        else
        {
            n=n-(a-x);
            a=x;
            if(b-n>=y)
            {
                b=b-n;
            }
            else
            {
                b=y;
            }
            printf("%lld\n",a*b);
        }
    }
    else
    {
        if(b-n>=y)
        {
            printf("%lld\n",(b-n)*a);
        }
        else
        {
            n=n-(b-y);
            b=y;
            if(a-n>=x)
            {
                a=a-n;
            }
            else
            {
                a=x;
            }
            printf("%lld\n",a*b);
        }
    }
}
int main() {
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
       ans(); 
    }
    return 0;
}