#include<stdio.h>
void ans()
{
    int n,k,arr[100];
    scanf("%d %d",&n,&k);
    arr[0]=0;
    for(int i=1;i<n+1;++i)
    {
        scanf("%d",&arr[i]);
    }
    int s=0,c=0;
    for(int i=0;i<n;++i)
    {
        if(s<(arr[i+1]-arr[i]))
        {
            s=arr[i+1]-arr[i];
            c=1;
        }
        else
        {
            s=s;
            c=1;
        }
    }
    int m=(k-arr[n])*2;
    if(s>m)
    {
        printf("%d\n",s);
    }
    else
    {
        printf("%d\n",m);
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int j=0;j<t;++j)
    {
        ans();
    }
    return 0;
}
