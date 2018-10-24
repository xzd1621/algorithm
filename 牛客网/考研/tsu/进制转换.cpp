#include<iostream>
#include<string>
#include<cstring>
#include<deque>
#include<stack>
using namespace std;
void change(string s)
{
	int index=0,j,temp=0,i,div,num,len=s.length();
	int get[len];
	for(int i=0;i<len;i++)
	get[i]=s[i]-'0';
	stack<int>ans;
	while(index<len)
	{
		for(int i=0;i<len;i++)
		{
			div=(get[i]+temp*10)/2;
			num=(get[i]+temp*10)%2;
			get[i]=div;
			temp=num;
		}
		temp=0;
		ans.push(num);
		if(get[index]==0)
		index++;
	}
	while(!ans.empty())
	{
		cout<<ans.top();
		ans.pop();
	} 
	cout<<"\n";
}
int main()
{
	string s;
	while(cin>>s)
	change(s);
}
