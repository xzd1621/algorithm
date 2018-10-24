#include<iostream>
#include<algorithm> 
#include<string>
using namespace std;
int main()
{
	string s;
	while(cin>>s)
	{
		int countz=0,counto=0,countj=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='Z')
			countz++;
			else if(s[i]=='O')
			counto++;
			else
			countj++;
		} 
		while(countz>0||counto>0||countj>0)
		{
			if(countz>0)
			{
				countz--;
				cout<<"Z";
			}
			if(counto>0)
			{
				counto--;
				cout<<"O";
			}
		    if(countj>0)
			{
				countj--;
				cout<<"J";
			}
		}
		cout<<"\n";
	}
}
