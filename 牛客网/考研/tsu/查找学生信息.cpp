#include<iostream>
#include<cmath>
#include<stack>
#include<string> 
using namespace std;
struct student
{
	string id;
	string name;
	string sex;
	int age;
};
int main()
{
	int n;
	while(cin>>n)
	{
		student s[n];;
		for(int i=0;i<n;i++)
		cin>>s[i].id>>s[i].name>>s[i].sex>>s[i].age;
		int m;
		cin>>m;
		string query[m];
		for(int i=0;i<m;i++)
		cin>>query[i];
		for(int i=0;i<m;i++)
		{
			bool flag=false;
			for(int j=0;j<n;j++)
			{
				if(query[i]==s[j].id)
				{
					flag=true;
					cout<<s[j].id<<" "<<s[j].name<<" "<<s[j].sex<<" "<<s[j].age<<"\n";
					break;
				}
			}
			if(!flag)
			cout<<"No Answer!\n";
		}
	}
}
