#include<iostream>
#include<string> 
using namespace std;
int sum(int t)
{
	int ant=0;
	while(t>0)
	{
		ant+=t%10;
		t/=10;
	}
	return ant;
}
int main()
{
	int t;
	while(cin>>t)
	{
		int h=t*t;
		cout<<sum(t)<<" "<<sum(h)<<"\n";
	}
}
