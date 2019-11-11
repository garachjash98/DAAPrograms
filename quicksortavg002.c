#include<stdio.h>
 #include<time.h>
void quicksort(int n[25],int high,int low){
   int i, j, pivot, temp;
   if(high<low){
      pivot=high;
      i=high;
      j=low;
      while(i<j){
         while(n[i]<=n[pivot]&&i<low)
         i++;
         while(n[j]>n[pivot])
            j--;
         if(i<j){
            temp=n[i];
            n[i]=n[j];
            n[j]=temp;
         }
      }
      temp=n[pivot];
      n[pivot]=n[j];
      n[j]=temp;
      quicksort(n,high,j-1);
      quicksort(n,j+1,low);
   }
}
int main(){
   int i, count, n[100];
   printf("How many elements are u going to enter?: ");
   scanf("%d",&count);
   for(i=0;i<count;i++)
   {
       n[i]=i;
       printf("\n%i",n[i]);
    }
       double total_time;
    clock_t start, end;
    start = clock();
   quicksort(n,0,count-1);
   printf("\n Order of Sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",n[i]);
       end = clock();
	  total_time=((double) (end - start))/CLK_TCK;
	  printf("\n %f",total_time);
   return 0;
}
