#include <stdio.h>

#define SIZE 3

int input(int arr[],int n)
{
    int i;
    for (int i = 0; i < n; i++)
            scanf("%d" ,&arr[i]);
        return i;
}
int Min(int *arr, int n)
{
    int i, min = arr[0];
        for (i = 0; i < n; i++)
    {
        if (min >= arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int main(int argc, char **argv)

{

     int myArr[SIZE] = {0};
    // int min1;
    //  min1 = Min(myArr,SIZE);
     input(myArr, SIZE);
     printf("%d" ,Min(myArr,SIZE)); 
   //  printf("%d" ,min1); 

    
    return 0;
}
//    .\E2.exe


// int min = myArr[0],i;
//    for( i = 0; i <  SIZE; i++)
//    {
     
//        if (myArr[i] < min)
//        {
//           min = myArr[i];
//        }
//    }