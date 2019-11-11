#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void merge_sort(int arr[],int p, int r)
{
    int q;
    if (p < r)
    {
        q = (p+r)/2;
        //printf("%d\n",q);
        merge_sort(arr,p,q);
        merge_sort(arr,q+1,r);
        sort(arr,p,q,r);
    }
}
void printArray(int ar[], int n)
{
    for(int x = 0;x<n;x++)
    {
        printf("Sorted Array is :");
        printf("%d\n",ar[x]);
    }
}

void sort(int arr[], int p, int q, int r)
{
    int i,j,k;
    int n1 = q - p + 1;
    int n2 = r - q;

    int Left[n1], Right[n2];

    Left[n1+1] = INFINITY;
    Right[n2+1] = INFINITY;

    for (i = 0; i < n1; i++)
    {
        Left[i] = arr[p + i];
    }

    for (j = 0; j < n2; j++)
    {
        Right[j] = arr[q + 1+ j];
    }

    i = 0;
    j = 0;
    k = p;

    while(i < n1 && j < n2)
    {
        if (Left[i] <= Right[j])
        {
            arr[k] = Left[i];
            i++;
        }
        else
        {
            arr[k] = Right[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = Left[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = Right[j];
        j++;
        k++;
    }
}

int main(){
    int n;
    clock_t t1,t2;

    double cpu_time;

    int w = 0;

    printf("Enter number of element :");
    scanf("%d",&n);

    int arr[n];

    for(int i = 0;i < n;i++)
    {
        arr[i] = i;
    }

    t1 = clock();
    merge_sort(arr,w,n);
    t2 = clock();

    //printArray(arr, n);
    cpu_time = ((double)(t2-t1))/CLOCKS_PER_SEC;

    printf("Time is %f",cpu_time);

    return 0;
}


