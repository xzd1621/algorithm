#include<stdio.h>;
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		long long a,b,i;
		long long result;
		for(i=0;i<n;i++)
		{
			scanf("%lld%lld",&a,&b);
			result=a*b-a-b;
			printf("%lld\n",result);
		}
	}
}
