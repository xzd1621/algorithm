#include<iostream>
#include<cmath> 
using namespace std;
int main()
{
	int a,b,c;
	while(cin>>a>>b>>c)
		cout<<a+b+c-2*max(max(a,b),c)<<"\n";
}
