#include<iostream>
using namespace std;
int main() 
{
	int a,b,c;
	for(a=1;a<=9;a++)
		for(b=1;b<=9;b++)
			for(c=0;c<=9;c++)
				if(a*100+b*10+c+b*100+c*10+c==532)
				cout<<a<<" "<<b<<" "<<c<<"\n";
}
