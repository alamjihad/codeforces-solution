#include<stdio.h>
int main ()
{
    int n,i,a,b,l=0,m=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            m++;
        }
        else if(b>a)
        {
            k++;
        }
        else if(m==k)
        {
            l++;
        }
    }
    if(m>k&&m>l)
    {
        printf("Mishka");
    }
    else if(k>m&&k>l)
    {
        printf("Chris");
    }
    else
    {
        printf("Friendship is magic!^^");
    }
    return 0;
}
