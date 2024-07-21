#include <stdio.h>
#include <inttypes.h>

#define SIZE 10

int input(int arr[],int n)
{
    int i;
    for (int i = 0; i < n; i++)
            scanf("%d" ,&arr[i]);
        return i;
}
void output(int arr[],int n)
{   int i;
    for ( i = 0; i < n; i++)
            printf("%d " ,arr[i]); //\n dont work
         printf("\n");
    
}


void swap(int*a,int*b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

//Реверс массива
void revers_array(int a[], int size)
{
    for(size_t i=0; i<size/4; i++)
    {
        swap(&a[i], &a[(size/2)-1-i]);
        swap(&a[(size/2) + i], &a[size-1-i]);
    }
    return;
}
int main(int argc, char **argv)

{

      int myArr[SIZE];
      //int arr[SIZE] = {5,4,3,2,1,6,7,8,9,10};
     input(myArr, SIZE);
     // output(myArr,SIZE);
      
     // output(arr,SIZE);
   
    int temp =0;
    
    for (int i = 0; i < SIZE / 2; i++)
    {
        for (int j = 0; j < SIZE/2 - i - 1; j++)
        {
            if (myArr[j] >myArr[j+1])
            {
                temp = myArr[j];
                myArr[j] = myArr[j+1];
                myArr[j+1] = temp;
            }
        }
        for (int j = SIZE/2; j < SIZE - i - 1; j++)
        {
            if (myArr[j] < myArr[j+1])
            {
                temp = myArr[j];
                myArr[j] = myArr[j+1];
                myArr[j+1] = temp;
            }
        }
   }
    
     output(myArr,SIZE);
    return 0;
}
 //    14  25  13  30  76  58  32  11  41  97