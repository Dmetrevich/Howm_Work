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

     // int myArr[SIZE];
      int myArr[SIZE] = {1,2,3,4,5,6,7,8,9,10};
   //   input(myArr, SIZE);
     // output(myArr,SIZE);
      revers_array(myArr,SIZE);
      output(myArr,SIZE);
   
   
    
    
    return 0;
}