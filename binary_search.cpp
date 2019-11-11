#include<iostream>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;
int binary_search(int arr[],int x,int num,int value);
int main()
{
	int num;
	cout<<"Enter number of total elements"<<endl;
	cin>>num;
	int ele,search,i,arr[num],value;
	time_t t1,t2;
	double final;
	for(i=1;i<=num;i++)
	{
		arr[i]=i;
	}
	//in case to print array and check for validity
	
	/**
	for(i=0;i<num;i++)
	{
		cout<<arr[i]<<endl;
	}
	**/
	cout<<"Enter element to search"<<endl;
	cin>>value;
	t1=clock();
	binary_search(arr,0,num,value);
	t2=clock();
	final=(double)(t2-t1)/CLOCKS_PER_SEC;
	cout<<"Time Taken "<<final;
	return 0;
}
int binary_search(int arr[],int x,int num,int value)
{
	int i=num;
	int mid=num/2;
	if(arr[mid]==value)
	{
		cout<<"Element Found at "<<mid<<"th position"<<endl;
	}
	else if(value<arr[mid])
	{
		binary_search(arr,0,mid-1,value);
	}
	else
	{
		binary_search(arr,mid+1,i,value);
	}
}
