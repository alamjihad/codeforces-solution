#include<stdio.h>
void ans(int n)
{
    int i,a=0,b=0,arr[1100];
    for(i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==0)
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    b=b/9*9;
    if(a==0)
    {
        printf("-1");
    }
    else if(b==0||a==b)
    {
        printf("0");
    }
    else
    {
        while(b!=0)
        {
            printf("5");
            b--;
        }
        while(a!=0)
        {
            printf("0");
            a--;
        }
    }   
}
int main()
{
    int n;
    scanf("%d",&n);
    ans(n);
    return 0;
}