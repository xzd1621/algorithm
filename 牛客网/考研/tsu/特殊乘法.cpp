#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1,s2;
	while(cin>>s1>>s2)
	{
		int sum=0;
		for(int i=0;i<s1.length();i++)
		{
			for(int j=0;j<s2.length();j++)
			{
				sum+=(s1[i]-'0')*(s2[j]-'0');
			}
		}
		cout<<sum<<"\n";
	}
} 
