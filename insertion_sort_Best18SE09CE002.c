#include <stdio.h>
#include <time.h>

int main(){
    int n;
     int temp;
    clock_t end,begin;
    double cpu;
    printf("Enter number of element :");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        arr[i] = i;
    }
    begin = clock();


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
    cpu = ((double)(end-begin))/CLOCKS_PER_SEC;
    printf("Time is %f",cpu);
}

