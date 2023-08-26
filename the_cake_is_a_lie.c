#include<stdio.h>
int main()
{
    int t,n,m,k;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        scanf("%d %d %d",&n,&m,&k);
        long long int s;
        s=n*m-1;
        if(s==k)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
