#include<stdio.h>
void result(int n)
{
    int sum=n,ans;
    for(int i=1;i<n;i++)
    {
        sum=sum+(n-i)*i;
    }
    printf("%d",sum);
}
int main()
{
    int n;
    scanf("%d",&n);
    result(n);
    return 0;
}
