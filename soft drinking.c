#include<stdio.h>
int main()
{
    int n,k,l,c,d,p,nl,np,s,m,x,y,z,r;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
    s=c*d;
    m=k*l;
    x=m/(n*nl);
    y=s/n;
    z=p/(n*np);
    if(x<=y&&x<=z)
    {
        r=x;
    }
    else if(y<=x&&y<=z)
    {
        r=y;
    }
    if(z<=x&&z<=y)
    {
        r=z;
    }
    printf("%d",r);
    return 0;
}
