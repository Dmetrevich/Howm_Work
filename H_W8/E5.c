#include <stdio.h>

#define SIZE 10

int input(int arr[],int n)
{
    int i;
    for (int i = 0; i < n; i++)
            scanf("%d" ,&arr[i]);
        return i;
}
int uns_sum(int *arr,int n)
{
int sum = 0;
     for(int i = 0; i < n; i++)
        {
            if (arr[i] > 0)
            {
                sum += arr[i];
              
            }
        }
   
        // printf("%d %d" ,max1,max2); 
        // printf("%d ",max1+max2); 
    return sum;
}

int main(int argc, char **argv)

{

     
    
      int myArr[SIZE]; 
     // int myArr[SIZE] = {1, -2, 3, -4, 5, -6, 7, -8, 9, 0};
       input(myArr, SIZE);  //!!!
      int res;
       res = uns_sum(myArr,SIZE);
   
     
     //printf("%d ",uns_sum(myArr,SIZE)); 
      printf("%d ",res); 
   
    // 

    
    return 0;
}
//   .\E4.exe
