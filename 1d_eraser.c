#include<stdio.h>
void ans(int n,int k)
{
    int i;
       char str[400000];
       int sum=0;
       scanf("%s",str);
       for(i=0;i<n;++i)
       {
           if(str[i]=='B')
           {
               sum++;
               i+=k-1;
           }
       }
       printf("%d\n",sum);
}
int main()
{
    int t,i;
    scanf("%d",&t);
    for(int j=0;j<t;++j)
    {
       int n,k;
       scanf("%d %d",&n,&k);
       ans(n,k);
    }
    return 0;
}
