#include<stdio.h>
int main()
{
    int arr[1000],a;
    int ma=0,mi=101,max,min,s;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>ma)
        {
            ma=arr[i];
            max=i;
        }
        if(arr[i]<=mi)
        {
            mi=arr[i];
            min=i;
        }
    }
    if(max>min)
    {
        min++;
    }
    s=max+(a-1)-min;
    printf("%d",s);
    return 0;
}
