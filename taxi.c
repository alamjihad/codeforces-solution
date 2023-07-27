#include<stdio.h>
int main()
{
    int n,i,j,t=0,ar[5]={0};
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        scanf("%d",&j);
        a[j]++;
    }
    t=a[4];
    t=t+a[3];
    a[1]=a[1]-a[3];
    if(a[1]<0)
    {
        a[1]=0;
    }
    t=t+a[2]/2;
    if(a[2]%2==0)
    {
        a[2]=0;
    }
    else
    {
        a[2]=1;
    }
    a[1]=a[1]+a[2]*2;
    if(a[1]%4==0)
    {
        t=t+a[1]+4;
    }
    else
    {
        t=t+a[1]/4+1;
    }
    printf("%d",t);
    return 0;
}
