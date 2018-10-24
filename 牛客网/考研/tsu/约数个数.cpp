#include<iostream>
#include<string>
#include<cstring>
#include<sstream>
#include<cmath>
#include<set>
using namespace std;
int gcd(int n)
{
	int count=0;
	set<int>s;
	for(int i=1;i<=int(sqrt(n));i++)
	{
		if(n%i==0)
		{
			s.insert(i);
			s.insert(n/i);
		}
	}
	return s.size();
}
int main()
{
	int n;
	while(cin>>n)
	{
		int num[n];
		for(int i=0;i<n;i++)
		cin>>num[i];
		for(int i=0;i<n;i++)
		cout<<gcd(num[i])<<"\n";
	}
} 
