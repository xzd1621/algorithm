#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		long long d[n],max_sum=0,ant=-9223372036854775808;
		for(int i=0;i<n;i++)
		{
			cin>>d[i];
			max_sum+=d[i];
			ant=max(ant,max_sum);
			if(max_sum<0)
			max_sum=0;
		}
		cout<<ant<<"\n";
	}
}
