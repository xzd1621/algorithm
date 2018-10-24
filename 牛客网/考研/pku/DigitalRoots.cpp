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
	string s;
	while(cin>>s)
	{
		int h=0;
		for(int i=0;i<s.length();i++)
		h+=s[i]-'0';
		while(sum(h)>=10)
		{
			h=sum(h);
		}
		cout<<sum(h)<<"\n";
	}
}
