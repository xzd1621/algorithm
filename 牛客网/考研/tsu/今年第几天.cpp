#include<iostream>
using namespace std;
int main()
{
	int year,month,day;
	int m[12]={31,28,31,30,31,30,31,31,30,31,30,31}; 
	while(cin>>year>>month>>day)
	{
		int count=0;
		if((year%4==0&&year%100!=0)||year%400==0)
		m[1]=29;
		for(int i=0;i<month-1;i++)
		count+=m[i];
		count+=day;
		cout<<count<<"\n"; 
	}	
}
