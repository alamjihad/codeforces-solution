#include<stdio.h>
int main()
{
    int n,i,a=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    for(i=0;i<n;i++)
    {
       if(s[i]==s[i+1])
       {
           a=a+1;
       }
    }
    printf("%d",a);
    return 0;
}
