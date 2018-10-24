#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	 int n;
	 while(cin>>n)
	 {
	 	int a[n];
	 	for(int i=0;i<n;i++)
	 	cin>>a[i];
	 	sort(a,a+n);
	 	int ant=10001;
	 	for(int i=1;i<n;i++)
	 	{
	 		ant=min(ant,a[i]-a[i-1]);
		 }
		 cout<<ant<<"\n";
	 }
	 return 0;
}
