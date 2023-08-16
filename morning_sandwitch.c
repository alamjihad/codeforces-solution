#include<stdio.h>
int main()
{
    int t,n,y,z,m;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        scanf("%d %d %d",&n,&y,&z);
        m=y+z;;
        if(y+z>=n)
        {
            printf("%d\n",(2*n)-1);
        }
        else
        {
            printf("%d\n",(2*(z+y))+1);
        }
    }
    return 0;
}
