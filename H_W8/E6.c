#include <stdio.h>

#define SIZE 12

int input(int arr[],int n)
{
    int i;
    for (int i = 0; i < n; i++)
            scanf("%d" ,&arr[i]);
        return i;
}
void aver_num(int *arr,int n)
{
int sum = 0;
     for(int i = 0; i < n; i++)
        
   sum +=arr[i];
        
   printf("%.2f", (float)sum/n);
}

int main(int argc, char **argv)

{

     int myArr[SIZE];
      //int myArr[SIZE];
      //  int myArr[SIZE] = {1,2,3,4,5,6,7,8,9,10,11,12};
      //int myArr[SIZE] = {4, -5, 3, 10, -4, -6, 8, -10, 1, 0, 5, 7};
       input(myArr, SIZE);  //!!!
    
     
      aver_num(myArr,SIZE); 
     
   
   
    return 0;
}
//   .\E4.exe
