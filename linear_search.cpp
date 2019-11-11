#include<iostream>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;
int linear_search(int arr[],int num,int value);
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
	linear_search(arr,num,value);
	t2=clock();
	final=(double)(t2-t1)/CLOCKS_PER_SEC;
	cout<<"Time Taken "<<final;
	return 0;
}
int linear_search(int arr[],int num,int value)
{
	int i;
	for(i=0;i<num;i++)
	{
		if(arr[i]==value)
		{
			cout<<"Element found at: "<<i<<"th position"<<endl;
			break;
		}
	}
}

