#include<stdio.h>
int main()
{
    int arr[1000],n;
    double s=0,d;
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
        s=s+arr[i];
    }
    d=s/n;
    printf("%0.5llf",d);
    return 0;
}
