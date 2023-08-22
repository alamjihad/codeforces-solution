#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        int n,m,l;
        scanf("%d %d",&n,&m);
        if(m%2==0)
        {
            l=n*m/2;
        }
        else
        {
            if(n%2==0)
            {
                l=m*(n/2);
            }
            else
            {
                l=n*(m/2)+n/2+1;
            }
        }
        printf("%d\n",l);
    }
    return 0;
}
