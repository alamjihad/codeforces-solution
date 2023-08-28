#include<stdio.h>
int main()
{
	int t;
	scanf ("%d",&t);
	for(int i=0;i<t;++i)
	{
		long long int n,s;
		scanf ("%lld",&n);
		s=(n+1)/2;
		printf ("%d\n",s);
	}
	return 0;
}