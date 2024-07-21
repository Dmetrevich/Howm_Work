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

void copy(int *arr1,int n, int *arr2)
{

int i;
    for ( i = 0; i < n; i++)
            
          arr2[i] =arr1[i];

}

int resiv_num(int n)
{
    int i;
    if (n > 9 || n < -9 || n == 0)
    {
        i = (n/10)%10;
        n = n/10;
    }
    else
       i = 0;
    return i;
}
int pass_size(int arr[], int size)
{
    int a = 0;
    for (int i = 0; i < size; i++)
    {
        if (resiv_num(arr[i]) == 0)
            a++;
    }
        return a;
}
void copy_num_arr(int arr1[], int size1, int arr2[])
{
    int size2 = -1;
    for (int i = 0; i < size1; i++)
    {
        if (resiv_num(arr1[i]) == 0)
            {
                ++size2;
                arr2[size2] = arr1[i];
            }
    }
}
int main(int argc, char **argv)

{
    
     // int SIZE = 10;
     int myArr[SIZE] = {0};
    int  myarr2[SIZE];
     // int myArr[SIZE] = {40, 105, 203, 1, 14, 1000, 22, 33, 44, 55};//, myarr2[n];
    
     input(myArr, SIZE);
      int cop =  pass_size(myArr,SIZE);
      copy_num_arr(myArr,SIZE,myarr2);
    // output(myArr,n);
     printf("\n");

   
    //  printf(" myArr Copy = \n");
      output(myarr2,cop);
    //  printf("\n");

        return 0;
}