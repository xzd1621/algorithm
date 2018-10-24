#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool judge(string s,int k)
{
	int len=s.length();
	int t=0;
	for(int i=0;i<len;i++)
	{
		t=(t*10+s[i]-'0')%k;
	}
	return t==0;	
}
int main()
{
	string s;
	vector<int>v;
	while(cin>>s)
	{
		v.clear();
		for(int i=2;i<=9;i++)
		{
			if(judge(s,i))
			{
				cout<<i<<" ";
				v.push_back(i);
			}
		}
		if(v.size()==0)
		cout<<"none";
		cout<<"\n";
	}
	
}
