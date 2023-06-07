#include<stdio.h>
int main()
{
    int n,i,p,q,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&p,&q);
        if(q-p>=2)
        {
            s++;
        }
    }
    printf("%d",s);
    return 0;
}
