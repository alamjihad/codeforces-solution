#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        scanf("%d",&n);
        int s=0;
        for(int j=0;j<n;++j)
        {
            int a,b;
            scanf("%d %d",&a,&b);
            if(a>b)
            {
                s++;
            }
        }
        printf("%d\n",s);
    }
    return 0;
}
