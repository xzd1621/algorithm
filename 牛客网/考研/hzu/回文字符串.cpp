#include<iostream>
#include<string>
using namespace std;
bool judge(string s)
{
	for(int i=0;i<s.length()/2;i++)
	{
		if(s[i]!=s[s.length()-i-1])
		return false;
	}
	return true;
}
int main()
{
	string s;
	while(cin>>s)
	{
		if(judge(s))
		cout<<"Yes!\n";
		else
		cout<<"No!\n";
	}
		
} 
