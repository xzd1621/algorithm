#include<iostream>
#include<algorithm> 
#include<string>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		int x;
		cin>>x;
		bool flag=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]==x)
			{
				flag=1;
				cout<<i<<"\n";
				break;
			}
		}
		if(!flag)
		cout<<"-1\n";
	}
}
