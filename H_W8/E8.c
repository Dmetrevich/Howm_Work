#include <stdio.h>
#include <inttypes.h>

#define SIZE 12

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
    for(size_t i=0; i<size/6; i++)
    {
        swap(&a[i], &a[(size/3)-1-i]);//1-4
        
        
    }
    for(size_t i=0; i<size/6; i++)
    {
      
        swap(&a[(size/2 + 2) + i], &a[size-1-i]); //8-12

     
       }
       for(size_t i= 0; i<size/6; i++)
    {
        
      swap(&a[size/3+i], &a[size/2+1-i]);

    }
   
    
}
int main(int argc, char **argv)

{

     int myArr[SIZE];
    //  int myArr[SIZE] = {4, -5, 3, 10, -4, -6, 8, -10, 1, 0, 5, 7};
       input(myArr, SIZE);
      
      revers_array(myArr,SIZE);
      output(myArr,SIZE);
   //  printf("%d ",sum_max(myArr,SIZE)); 
    // printf("%d ",res); 
   
    // 

    
    return 0;
}