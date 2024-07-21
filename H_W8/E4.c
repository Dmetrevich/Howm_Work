#include <stdio.h>

#define SIZE 10

int input(int arr[],int n)
{
    int i;
    for (int i = 0; i < n; i++)
            scanf("%d" ,&arr[i]);
        return i;
}
int sum_max(int *arr,int n)
{
int max1 = arr[0],i,max2 = 0, pos = 0,sum = 0;
     for( i = 0; i <  SIZE; i++)
        {
            if (arr[i] > max1)
            {
                max1 = arr[i];
                pos = i;
            }
        }
    for( i = 0; i <  SIZE; i++)
        {
            if (arr[i] > max2 && max1 > max2 && pos !=i)
            {
                max2 = arr[i];
            }
        }
        sum = max1+max2;
        // printf("%d %d" ,max1,max2); 
        // printf("%d ",max1+max2); 
    return sum;
}

int main(int argc, char **argv)

{

    int myArr[SIZE];
      //int myArr[SIZE]; !!!!
     input(myArr, SIZE);
        // int myArr[SIZE] = {4, -5, 3, 10, -4, -6, 8, -10, 1, 0};
     // int myArr[SIZE] = {1,2,3,4,5,6,7,8,9,10};
      int res;
      res = sum_max(myArr,SIZE);
   
     // sum_max(myArr,SIZE)
     //  printf("%d ",sum_max(myArr,SIZE)); 
     printf("%d ",res); 
   
    // 

    
    return 0;
}
//   .\E4.exe
