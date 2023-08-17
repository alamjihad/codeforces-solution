#include<stdio.h>
int main()
{
    int n,m ,init;
    long long int time;
    scanf("%d %d",&n,&m);
    init=1,time=0;
    for(int i=0;i<m;++i)
    {
        int pres;
        scanf("%d",&pres);
        if(pres>=init)
        {
            time+=pres-init;
        }
        else
        {
            time+=n-(init-pres);
        }
        init=pres;
    }
    printf("%lld",time);
    return 0;
}
