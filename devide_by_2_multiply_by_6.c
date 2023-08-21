#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
       long long int n;
        scanf("%lld",&n);
        long long int c=0,s=0;
        int m;
        while(n%2==0)
        {
            n=n/2;
            c++;
        }
        while(n%3==0)
        {
            n=n/3;
            s++;
        }
        if(n!=1||c>s)
        {
            printf("-1\n");
        }
        else
        {
            m=(s-c)+s;
            printf("%d\n",m);
        }
    }
}
