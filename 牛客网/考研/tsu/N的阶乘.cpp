#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		unsigned long long ant=1,i=1;
		while(i<=n)
		{
			ant*=i;
			i++;			
		}
		cout<<ant<<"\n";
	}
}
