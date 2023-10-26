#include<stdio.h>
void ans(int n)
{
    int arr[1011],m=-1,i;
    for(i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;++i)
    {
        int c=1;
        for(int j=i+1;j<n;++j)
        {
            if(arr[j]>arr[j-1])
            {
                break;
            }
            else
            {
                c++;
            }
        }
        for(int y=i-1;y>=0;y--)
        {
            if(arr[y]>arr[y+1])
            {
                break;
            }
            else
            {
                c++;
            }
        }
        if(c>m)
        {
            m=c;
        }
    }
    printf("%d",m);
}
int main()
{
    int n;
    scanf("%d",&n);
    ans(n);
    return 0;
}