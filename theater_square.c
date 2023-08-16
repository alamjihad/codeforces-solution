#include<stdio.h>
int main()
{

long long int n,m,a,l,w,s;
scanf("%lld%lld%lld",&n,&m,&a);
l=n/a;
if(n%a!=0)
{
    l=l+1;
}
w=m/a;

if(m%a!=0)
{
    w=w+1;
}
s=l*w;
printf("%lld",s);
return 0;
}
