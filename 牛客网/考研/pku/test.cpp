#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
void f()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	c=add(a,b);
	printf("%d\n",c);
}
int main()
{
	f();
}
