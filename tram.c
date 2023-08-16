#include<stdio.h>
int main()
{
    int i,n,a,b,p=0,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        p=b-a+p;
        //s=s+p;
        if(s<p)
        {
            s=p;
        }
    }
    printf("%d",s);
    return 0;
}
