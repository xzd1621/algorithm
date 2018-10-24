#include<iostream>
#include<cmath> 
using namespace std;
int gcd(int a,int b)
{
	if(b==0)return a;
	return gcd(b,a%b);
}
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		if(b>a)
		swap(a,b);
		cout<<gcd(a,b)<<"\n";
	}
}
