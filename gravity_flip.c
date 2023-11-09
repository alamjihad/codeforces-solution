#include<stdio.h>
int main()
{
    int arr[1000],n;
    int i,j,s,temp;
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;++i)
    {
        s=i;
        for(j=i+1;j<n;++j)
        {
            if(arr[j]<arr[s])
            {
                s=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[s];
        arr[s]=temp;
    }
    for(i=0;i<n;++i)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
