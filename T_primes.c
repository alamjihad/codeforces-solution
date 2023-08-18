#include<stdio.h>
#include<math.h>
int main()
{
  int i,j;
  int arr[1000000]={0};
  for(i=2;i<=1000000;++i)
  {
    if(arr[i]==0)
    {
      for(j=2;i*j<=1000000;++j)
      {
        arr[i*j]=1;
      }
    }
  }
  int x;
  scanf("%d",&x);
  long long int b,sq;
  for(int i=0;i<x;++i)
  {
    scanf("%lld",&b);
    sq=sqrt(b);
    if(b==1)
    {
       printf("NO\n");
    }
    else if((sq*sq==b)&& (arr[sq]==0))
    {
      printf("YES\n");
    }
    else
    {
      printf("NO\n");
    }
  }
  return 0;
}
