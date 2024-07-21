#include <stdio.h>

#define SIZE 5

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
double midl(int arr[],int size)
{
int sum = 0;
float midl = 0;

for(int i = 0; i <  size; ++i)
     {
        sum += arr[i];
     }
    midl = (float)sum/size;

return midl;
}




int main(int argc, char **argv)

{

     int myArr[SIZE] = {0};

     input(myArr, SIZE);
     printf("%.3f" ,midl(myArr,SIZE)); 

    

    return 0;
}
//      .\E1.exe