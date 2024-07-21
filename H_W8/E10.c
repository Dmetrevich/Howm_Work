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
            //printf("%2d " ,arr[i]); //\n dont work
            printf("%2d " ,arr[i]); //\n dont work
         printf("\n");
    
}
void shift_ciclN_rait(int a[], int size, int n)// 1234/2341
{

    while(n != 0)
  {
    int tmp=a[size - 1];
    for(size_t i=size-1; i> 0; --i)
    {
      
     a[i] = a[ i - 1]; 

     }
        a[0] = tmp;
        n--;
  }      
}

int main(int argc, char **argv)

{

    int myArr[SIZE];
    //  int myArr[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    input(myArr, SIZE);
     
      
      shift_ciclN_rait(myArr,SIZE,4);
      output(myArr,SIZE);
    

    
    return 0;
}