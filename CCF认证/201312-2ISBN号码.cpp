#include<iostream>
#include<string>
using namespace std;
int main()
{
	string isbn;
	while(cin>>isbn)
	{
		int count;
		count=(isbn[0]-'0')*1+(isbn[2]-'0')*2+(isbn[3]-'0')*3+(isbn[4]-'0')*4+
		(isbn[6]-'0')*5+(isbn[7]-'0')*6+(isbn[8]-'0')*7+(isbn[9]-'0')*8+(isbn[10]-'0')*9;
		count%=11;
		if(count==isbn[12]-'0')
		{
			cout<<"Right\n";
		}
		else
		{
			isbn[12]='0'+count;
			cout<<isbn<<"\n";
		}
	}
}
