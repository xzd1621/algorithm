#include<iostream>
using namespace std;
int main()
{
	int n,k;
	while(cin>>n>>k)
	{
		int cake[n];
		int sum=0,t=0;
		for(int i=0;i<n;i++)
		{
			cin>>cake[i];
			t+=cake[i];
			if(t>=k&&i<n-1)
			{
				t=0;
				sum+=1;
			}
		}
		cout<<sum+1<<"\n";
	}
}
