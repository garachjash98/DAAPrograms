#include<stdio.h>
#include<time.h>
void bubble()
 {
     int n;
     printf("Enter a number of elements :");
     scanf("%d",&n);
     int arr[n];
int i;
int j;
int temp;
for(i=0;i<n;i++)
{
    arr[i]=n-i;

}

	clock_t start, end;
	double total_time;
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

	total_time = (double) (end - start) / CLOCKS_PER_SEC;

    printf("%f",total_time);
}
void main()
{
    bubble();
}


