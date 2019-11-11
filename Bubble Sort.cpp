#include <ctime>
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include<stdio.h>
#include<time.h>
using namespace std;
int avg_bubble();
int best_bubble();
int worst_bubble();

int main()
{
	time_t t1,t2,choice;
	cout<<"Enter your choice:"<<endl<<"BEST Condition-- Enter 1 "<<endl<<"AVG Condition-- Enter 2 AVG)"<<endl<<"WORST Condition-- Enter 3 "<<endl;
	cin>>choice;
    cout<<"NOTE:- We are here suposing thatBubble sort will sort data in ascending order"<<endl;
    if(choice==1)
    {
    	t1 = clock();
    	best_bubble();
    	t2 = clock();
   	
	}
	else if(choice==2)

	{
		t1 = clock();
		avg_bubble();
		t2 =  clock();
	}
	else if(choice==3)
	{
		t1 = clock();
		worst_bubble();
		t2 = clock();
	}
    
    double final;
    final=((double)t2-t1)/CLOCKS_PER_SEC;
    printf("Time Taken for sorting is %.2f",final);
    return 0;
    	
}
int avg_bubble()
{
	int n,k,i,j,temp;
	
    cout<<"Enter no. of Elements";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
	{
		arr[i]=rand()%1000;
	}

  
   for (i = 0; i < n-1; i++) 
   {
   	for (j = 0; j < n-i-1; j++)
   	{
   		if (arr[j] >
		    arr[j+1])
   		{
   			temp = arr[j];
   			arr[j] = arr[j+1]; 
            arr[j+1] = temp;
   		}
	}
   }
    
   return 0;
}
int best_bubble()
{
	int n,k,i,j,temp;
	
    cout<<"Enter no. of Elements";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
	{
		arr[i]=i;
	}

  
   for (i = 0; i < n-1; i++) 
   {
   	for (j = 0; j < n-i-1; j++)
   	{
   		if (arr[j] >
		    arr[j+1])
   		{
   			temp = arr[j];
   			arr[j] = arr[j+1]; 
            arr[j+1] = temp;
   		}
	}
   }  
   return 0; 
}
int worst_bubble()
{
	int n,k,i,j,temp;
	
    cout<<"Enter no. of Elements";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
	{
		arr[i]=n-i;
	}

  
   for (i = 0; i < n-1; i++) 
   {
   	for (j = 0; j < n-i-1; j++)
   	{
   		if (arr[j] >
		    arr[j+1])
   		{
   			temp = arr[j];
   			arr[j] = arr[j+1]; 
            arr[j+1] = temp;
   		}
	}
   }
   return 0;   
}