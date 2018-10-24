#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	node* next;
}; 
node* Create(int *array,int n)
{
	node *head,*pre,*p;
	head=new node;
	head->next=NULL;
	pre=head;
	for(int i=0;i<n;i++)
	{
		p=new node;
		p->data=array[i];
		pre->next=p;
		pre=p;
	}
	pre->next=NULL;
	return head;
}
int search(node *head,int x)
{
	int count=0;
	node *p=head->next;
	while(p!=NULL)
	{
		if(p->data==x)
		count++;
		p=p->next;
	}
	return count;
}
int main()
{
	int array[1001]={3,4,5,1,7,2,3};
	node* result=Create(array,7);
	printf("%d\n",search(result,3));
	result=result->next;
	while(result!=NULL)
	{
		printf("%d ",result->data);
		result=result->next;
	}
	return 0;
}
