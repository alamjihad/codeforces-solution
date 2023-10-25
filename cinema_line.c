#include<stdio.h>
void ans(int n)
{
    int a=0,b=0,arr[100000];
    for(int i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==25)
        {
            a++;
        }
        if(arr[i]==50)
        {
            a--;
            b++;
        }
        if(arr[i]==100)
        {
            if(b!=0)
            {
                b--;
                a--;
            }
            else
            {
                a-=3;
            }
        }
        if(a<0||b<0)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}
int main()
{
    int n;
    scanf("%d",&n);
    ans(n);
    return 0;
}
