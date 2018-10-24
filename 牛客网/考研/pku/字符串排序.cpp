#include<iostream>
#include<string>
#include<queue> 
#include<stdio.h> 
#include<conio.h>
using namespace std;
struct node
{
	char s;
	bool operator<(const node &a) const
	{
		return a.s-'0'<s-'0';	
	}	
};
int main()
{
	string s;
	while(cin>>s)
	{
		priority_queue<node>t;
		for(int i=0;i<s.length();i++)
		{
			node h;
			h.s=s[i];
			t.push(h);
		}
		while(!t.empty())
		{
			cout<<t.top().s;
			t.pop();
		}
		cout<<"\n";
	}
}
