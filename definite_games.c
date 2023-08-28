#include<stdio.h>
int main()
{
	int n,s;
	scanf ("%d",&n);
	if(n==2)
	{
		printf ("2");
	}
	else
	{
	 s=n-1;
	 n=n-s;
	 if(n!=2)
	 {
	 	printf("1");
 	}
	}
	return 0;
}