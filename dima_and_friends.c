#include<stdio.h>
int main()
{
    int n,a,s=0;
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        scanf("%d",&a);
        s=s+a;
    }
    int p,c=0;
    p=(s%(n+1));
    for(int i=1;i<=5;++i)
    {
        p=p+1;
        if(p>n+1)
        {
            p=1;
        }
        else if(p!=1)
        {
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}
