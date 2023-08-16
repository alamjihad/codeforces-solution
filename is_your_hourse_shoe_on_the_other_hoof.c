#include<stdio.h>
int main()
{
    long long int arr[4];
    int s=0;
    for(int i=0;i<4;++i)
    {
        scanf("%lld",&arr[i]);
    }
    for(int i=0;i<4;++i)
    {
        if(arr[i]==arr[i+1])
        {
            s++;
        }
        else if(arr[i]==arr[i+2])
        {
            s++;
        }
        else if(arr[i]==arr[i+3])
        {
            s++;
        }
    }
    printf("%d",s);
    return 0;
}
