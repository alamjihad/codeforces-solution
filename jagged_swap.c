#include<stdio.h>
void ans()
{
    int n,arr[15];
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
    }
    if(arr[0]==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        ans();
    }
    return 0;
}
