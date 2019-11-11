#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int *p, int *a)
{
    int temp = *p;
    *p = *a;
    *a = temp;
}
void selectionsort(int arr[], int n)
{
    int i, j, min;
    for (i = 0; i < n-1; i++)
    {
        min= i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min])
            minPlace = j;
        swap(&arr[min], &arr[i]);
    }
}
void printarray(int ar[], int n)
{
    for(int x = 0;x<n;x++)
    {
        printf("Sorted Array is :");
        printf("%d\n",ar[x]);
    }
}
int main(){
    int n;
    clock_t t1,t2;
    double cpu_time;
    printf("Enter number of element :");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        arr[i] = rand()%(n+1);
    }
    t1 = clock();
    selectionsort(arr, n);
    t2 = clock();

    cpu_time = ((double)(t2-t1))/CLOCKS_PER_SEC;
    printf("Time is %f",cpu_time);
    return 0;
}

