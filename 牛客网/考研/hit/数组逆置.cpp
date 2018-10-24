#include<iostream>
#include<algorithm> 
#include<string>
using namespace std;
int main()
{
	string s;
	while(cin>>s)
	{
		for(int j=s.length()-1;j>=0;j--)
		cout<<s[j];
		cout<<"\n"; 
	}
}
