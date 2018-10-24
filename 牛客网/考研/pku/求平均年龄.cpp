#include<iostream>
#include<algorithm> 
#include<string>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		double sum=0.0,a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		printf("%.2f\n",sum/(double)n); 
	}
}
