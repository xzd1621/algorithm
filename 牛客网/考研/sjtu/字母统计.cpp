#include<iostream>
#include<map> 
#include<string>
using namespace std;
int main()
{
	string s;
	while(cin>>s)
	{
		map<char,int>m;
		m.clear();
		for(int j=0;j<s.length();j++)
		{
			if(s[j]-'A'>=0&&s[j]-'Z'<=0)
			{
				m[s[j]]++;
			}
		}
		for(int i=0;i<26;i++)
		{
			cout<<char('A'+i)<<":"<<m[char('A'+i)]<<"\n"; 
		}
	}
}
