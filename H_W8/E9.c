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
            //printf("%2d " ,arr[i]); //\n dont work
            printf("%2d " ,arr[i]); //\n dont work
         printf("\n");
    
}


void swap(int*a,int*b)
{
    int t = *a;
    *a = *b;
    *b = t;
}



void shift_1_rait(int a[], int size)// 1234/2341
{
    int tmp=a[size - 1];
    for(size_t i=size-1; i> 0; --i)
    {
      
     a[i] = a[ i - 1]; 

     }
        a[0] = tmp;

}
void revers(int a[], int size) //1234/4321
{
    //int tmp=a[0];
   
   for(size_t i=0; i<size/4; i++)
    
    {
      int tmp=a[i];
      a[i] = a[size - 1 -i]; 

      a[size-1 - i] = tmp;

     }
          
}



int main(int argc, char **argv)

{

   // int myArr[SIZE];
      int myArr[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    //  input(myArr, SIZE);
      
     shift_1_rait(myArr,SIZE);
     output(myArr,SIZE);
     printf("\n");
    

    
    return 0;
}