#include<stdio.h>
int main()
{
    int a,b,i,j=0;
    scanf("%d%d",&a,&b);
    for(i=1;;i++)
    {
      a=a*3;
      b=b*2;
      j=j+1;
      if(a>b)
      {
          printf("%d",j);
          break;
      }
    }
    return 0;
}
