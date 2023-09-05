#include<stdio.h>
int main()
{
    int time,number;
    scanf("%d",&time);
    for(int i=0;i<time;++i)
    {
        scanf("%d",&number);
        int odd=0,even=0,value;
        number=number*2;
        for(int j=0;j<number;++j)
        {
            scanf("%d",&value);
            if(value%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(odd==even)
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
