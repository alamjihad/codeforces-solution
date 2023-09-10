#include<stdio.h>
int main()
{
    int t,n;
    long long int arr[100000];
    scanf("%d",&t);
    for(int j=0;j<t;j++)
    {
        scanf("%d",&n);
        for(int i=0;i<n;++i)
        {
            scanf("%lld",&arr[i]);
        }
        long long int c,s;
        c=0;
        s=0;
        for(int i=0;i<n;++i)
        {
            s=s+arr[i];
            if(arr[i]==1)
            {
                c++;
            }
        }
        /*s=s-n;
        if(s>=c)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }*/
        if(s>=c+n&&n>1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
