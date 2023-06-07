#include<stdio.h>
int main()
{
  long long int x,d;
  scanf("%lld",&x);
  d=x/5;
  if(x%5==0)
    {
      printf("%lld",d);
    }
    else
    {
      printf("%lld",d+1);
    }
    return 0;
}
