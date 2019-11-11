#include<stdio.h>
#include<time.h>
void bubble()
 {
     int n;
     printf("enter a no. of element :");
     scanf("%d",&n);
     int arr[n];
int i;
int j;
int temp;
for(i=0;i<n;i++)
{
    arr[i]=rand()%(n+1);

}
double total_time;
	clock_t start, end;
	start = clock();


for( int i = 0 ;i < n ; i++ )
    {
      temp = arr[ i ];
      int j = i;

          while(j > 0  && temp < arr[ j -1])
            {
                arr[ j ] = arr[ j-1];
                j= j - 1;

           }
           arr[ j ] = temp;
     }
    end = clock();

	total_time = ((double) (end - start)) / CLK_TCK;

    printf("%f",total_time);
}
void main()
{
    bubble();
}


