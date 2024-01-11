#include<stdio.h>
void ans(int n,int l)
{
    int i,j,temp;
    double max,d;
    int arr[n+3];
    for(i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;++i)
    {
        for(j=0;j<n-1;++j)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    if(arr[0]>(l-(arr[n-1])))
    {
        max=2*arr[0];
    }
    else
    {
        max=2*(l-(arr[n-1]));
    }
    for(i=1;i<n;++i)
    {
        if((arr[i]-arr[i-1])>max)
        {
            max=arr[i]-arr[i-1];
        }
    }
    d=max/2;
    printf("%llf",d);
}
int main()
{
    int n,l;
    scanf("%d %d",&n,&l);
    ans(n,l);
    return 0;
}