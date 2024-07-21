#include <stdio.h>

#define SIZE 10

int input(int *arr,int n)
{
    int i;
    for (int i = 0; i < n; i++)
            scanf("%d" ,&arr[i]);
        return i;
}
void  max_min(int *arr,int len, int *max, int *min, int *pos_i,int *pos_a)
{
 *max = arr[0],*min = arr[0], *pos_a = 1,*pos_i = 1;
     for( int i = 0; i < len; i++)
        {
            if (arr[i] > *max)
            {
                *max = arr[i];
                *pos_a = i+1;
            }
        }
    for( int i = 0; i <  len; i++)
        {
            if (arr[i] <= *min)
            {
                *min = arr[i];
                *pos_i = i+1;
            }
        }
        
        // printf("%d %d %d %d " ,max,min,pos_a,pos_i); 
        // printf("%d ",max1+max2); 
    
}

int main(int argc, char **argv)

{

      int myArr[SIZE];
 
    input(myArr, SIZE);
    //  int myArr[SIZE] = {4, -5, 3, 10, -4, -6, 8, -10, 1, 0};
     // int myArr[SIZE] = {1,2,3,4,5,6,7,8,9,10};
        int max,min,pos_a = 1,pos_i = 1;
       max_min(myArr,SIZE,&max,&min,&pos_i,&pos_a);
       printf("%d %d %d %d",  pos_a,max,pos_i,min); 
   
    return 0;
}
//   .\E4.exe
