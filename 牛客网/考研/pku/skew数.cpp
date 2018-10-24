#include<iostream>
#include<string>
#include<cmath> 
using namespace std;
int main()
{
	string s;
	while(cin>>s)
	{
		int sum=0,len=s.length();
		for(int i=0;i<len;i++)
		{
			sum+=(s[i]-'0')*(pow(2,len-i)-1);
		}
		cout<<sum<<"\n";
	}
}
