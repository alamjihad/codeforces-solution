#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(int j=0;j<t;++j)
    {
        int n;
        scanf("%d",&n);
        int arr[n+1];
        for(int i=0;i<n;++i)
        {
            scanf("%d",&arr[i]);
        }
        int c=0,s;
        for(int i=0;i<n;++i)
        {
            if(arr[i]==i+1)
            {
                c++;
            }
        }
        if(c%2!=0)
        {
            c++;
        }
        printf("%d\n",c/2);
    }
    return 0;
}
