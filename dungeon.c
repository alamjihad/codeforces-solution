#include<stdio.h>
void ans()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int s=a+b+c;
    int k=s/9;
    if(s%9==0&&a>=k&&b>=k&&c>=k)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        ans();
    }
    return 0;
}
