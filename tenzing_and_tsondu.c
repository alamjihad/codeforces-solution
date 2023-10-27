#include<stdio.h>
void ans()
{
    long long int arro[1000],n;
    long long int arrt[1000],m;
    int t,i,j;
    scanf("%d",&t);
    for(i=0;i<t;++i)
    {
        long long int on=0,tw=0;
        scanf("%lld %lld",&n,&m);
        for(j=0;j<n;++j)
        {
            scanf("%lld",&arro[j]);
            on=on+arro[j];
        }
        for(int k=0;k<m;++k)
        {
            scanf("%lld",&arrt[k]);
            tw=tw+arrt[k];
        }
        if(on>tw)
        {
            printf("Tsondu\n");
        }
        else if(tw>on)
        {
            printf("Tenzing\n");
        }
        else
        {
            printf("Draw\n");
        }
    }
}
int main()
{
    ans();
    return 0;
}