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
void copy_zeero(int *arr1,int n, int *arr2)
{

int i;
    for ( i = 0; i < n; i++)
     {       
            if ((arr1[i]%10) == 0)
            {
             arr2[i] = arr1[i];
            }
    }
     for ( i = 0; i < n; i++)

           if (arr2[i] !=0)

                  printf("%2d " ,arr2[i]); 
                
}

int main(int argc, char **argv)

{


  



    // int myArrC[SIZE] = {0};
    //   int myArr[SIZE] = {1,2,30,4,5,60,7,80,9,10};
    // //  input(myArr, SIZE);
    //   printf(" myArr = \n");
    //  output(myArr,SIZE);
    //  printf("\n");

    // //copy(myArr,SIZE,myArrC);
    //  copy_zeero(myArr,SIZE,myArrC);

    // //  printf(" myArr Copy = \n");
    // //  output(myArrC,SIZE);
    // //  printf("\n");

        return 0;
}