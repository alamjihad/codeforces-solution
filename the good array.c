#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int s;
        s=(n+k-1)/k;
        if(n%k>1||(n%k==0&&k>1))
        {
            s++;
        }
        printf("%d\n",s);
    }
    return 0;
}
