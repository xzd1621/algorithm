#include<iostream>
#include<string>
using namespace std;
int main()
{
	string n;
	while(cin>>n)
	{
		int t=n.length();
		int sum=0;
		for(int i=0;i<t;i++)
		{
			sum+=n[i]-'0';
		}
		cout<<sum<<"\n";
	} 
} 
