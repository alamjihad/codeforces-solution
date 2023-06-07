#include<stdio.h>
int main()
{
    int i,j,k,l,n,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
            scanf("%d%d%d",&l,&j,&k);
            if((l==1&&j==1&&k==1)||(l==1&&j==1&&k==0)||(l==1&&j==0&&k==1)||(l==0&&j==1&&k==1))
            {
            s=s+1;
            }
    }
    printf("%d",s);
    return 0;
}









