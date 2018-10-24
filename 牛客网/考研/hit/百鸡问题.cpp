#include<iostream>
#include<algorithm> 
#include<string>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		for(int x=0;x<=100;x++)
		{
			for(int y=0;y<=100-x;y++)
			{
				int z=100-x-y;
				if((15*x+9*y+z)<=3*n)
					cout<<"x="<<x<<",y="<<y<<",z="<<z<<"\n";
			}
		}
	}
}
