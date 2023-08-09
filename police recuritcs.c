#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    int p=0,c=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(x>0)
        {
            p=p+x;
        }
        else
        {
            if(p<1)
            {
                c++;
            }
            else
            {
                p--;
            }
        }
    }
    printf("%d",c);
    return 0;
}
