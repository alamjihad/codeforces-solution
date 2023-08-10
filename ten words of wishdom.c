#include<stdio.h>
int main()
{
    int t,a,b,s,n,k;
    scanf("%d",&t);
    for(int j=0;j<t;++j)
    {
        int m=0;
        scanf("%d",&n);
        for(int i=0;i<n;++i)
        {
            scanf("%d %d",&a,&b);
            if(a<11&&b>m)
            {
                m=b;
                k=i+1;
            }
        }
         printf("%d\n",k);
    }
    return 0;
}
