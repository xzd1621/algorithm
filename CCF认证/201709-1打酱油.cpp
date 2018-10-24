#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		n/=10; 
		int sum=0;
		sum+=(n/5)*7;
		n%=5;
		sum+=(n/3)*4;
		n%=3;
		sum+=n;
		cout<<sum<<"\n";
	}
}
