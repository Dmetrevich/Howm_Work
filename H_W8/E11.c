#include <stdio.h>
 

 int input(int arr[],int n)
{
    int i;
    for (int i = 0; i < n; i++)
            scanf("%d" ,&arr[i]);
        return i;
}
int sort_arr( int *arr, int n)
{
int pos; //temp
         for(int i = 0; i < n-1; ++i) {
                   pos = i;
                   for(int j = i+1; j < n; ++j) {
                            if((arr[pos]%10)> (arr[j]%10))// 1,2,3,4
                         //  if(a[pos] < a[j]) // 4,3,2,1,
                                      pos = j;
                   }
                   if(pos != i) {
                            int t = arr[i];
                            arr[i] = arr[pos];
                            arr[pos] = t;
                   }
         }
}



int main(void) 
{
        // int arr[] = {14,  25,  13,  30 , 76,  58,  32,  11 , 41 , 97};
          const  int  n = 10;
          int arr[n];
          input(arr, n);
          // int size = sizeof(arr) / sizeof(arr[0]);
         size_t size = sizeof(arr) / sizeof(arr[0]);
       //  for (int i = 0; i < size; i++)
      //    printf("%d ",arr[i]);
      //    printf("%d \n");
         sort_arr(arr,size);
 
         for (int i = 0; i < size; i++)
         printf("%d ",arr[i] );
   
                  
 
         return 0;
}