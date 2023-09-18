#include<stdio.h>
int main()
{
    int t,a,n;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        scanf("%d",&n);
        int x1,x2,y1,y2;
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        int ans1,ans2,final1,final2;
        if(x1<n-x1+1)
        {
            ans1=x1;
        }
        else
        {
            ans1=n-x1+1;
        }
        if(y1<n-y1+1)
        {
            ans2=y1;
        }
        else
        {
            ans2=n-y1+1;
        }
        if(ans1<ans2)
        {
            final1=ans1;
        }
        else
        {
            final1=ans2;
        }
        if(x2<n-x2+1)
        {
            ans1=x2;
        }
        else
        {
            ans1=n-x2+1;
        }
        if(y2<n-y2+1)
        {
            ans2=y2;
        }
        else
        {
            ans2=n-y2+1;
        }
        if(ans1<ans2)
        {
            final2=ans1;
        }
        else
        {
            final2=ans2;
        }
        a=final2-final1;
        if(a<0)
        {
            a=a*(-1);
        }
        printf("%d\n",a);
    }
    return 0;
}
