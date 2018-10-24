#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int main()
{
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int y,d;
	while(cin>>y>>d)
	{
		if((y%4==0&&y%100!=0)||y%400==0)
		month[1]=29;
		int m=1,day,i=0;
		while(d>month[i])
		{
			d-=month[i];
			m++;
			i++; 
		}
		day=d;
		cout<<m<<"\n"<<day<<"\n";
	}
}
