#include<iostream>
using namespace std;
int a[10]={1,3,4,2,6,5,9,8,7,0};
void Print(int *a,int n)
{
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
}
void BubbleSort(int *a,int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			swap(a[j],a[j+1]);
		}
	}
}
void SelectSort(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		int k=i;
		for(int j=i;j<n;j++)
		{
			if(a[j]<a[k])
			k=j; 
		}
		swap(a[i],a[k]);
	}
}
void InsertSort(int *a,int n)
{
	for(int i=1;i<n;i++)
	{
		int j=i,temp=a[i];
		while(j>0&&temp<a[j-1])
		{
			a[j]=a[j-1];
			j--;
		}
		a[j]=temp;
	}
}
void QuickSort(int *a,int low ,int high)
{
	if(low>=high)
	return ;
	int temp=a[low],left=low,right=high;
	while(left!=right)
	{
		while(left<right&&a[right]>temp)
		right--;
		a[left]=a[right];
		while(left<right&&a[left]<temp)
		left++;
		a[right]=a[left];
	}
	a[right]=temp;
	QuickSort(a,low,left-1);
	QuickSort(a,right+1,high);
} 
void mergearray(int *a,int first ,int mid,int last,int *temp)
{
	int i=first,j=mid+1,k=0;
	while(i<=mid&&j<=last)
	{
		if(a[i]<=a[j])
		temp[k++]=a[i++];
		else
		temp[k++]=a[j++];
	}
	while(i<=mid)
	temp[k++]=a[i++];
	while(j<=last)
	temp[k++]=a[j++];
	for(int i=0;i<k;i++)
	a[first+i]=temp[i];
}
void MergeSort(int *a,int first,int last,int *temp)
{
	if(first<last)
	{
		int mid=(first+last)/2;
		MergeSort(a,first,mid,temp);
		MergeSort(a,mid+1,last,temp);
		mergearray(a,first,mid,last,temp);
	}
}
int main()
{
//	SelectSort(a,10);
//	BubbleSort(a,10);
//	InsertSort(a,10);
//	QuickSort(a,0,9);
	int temp[10];
	MergeSort(a,0,9,temp);
	Print(a,10);
}
