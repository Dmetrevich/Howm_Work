#include <stdio.h>


 #define lench 7





int main()
{
   
    int arr[lench] = {1,2,2,3,4,4,5};
   

    int pos , count;
    for (int i = 0; i < lench; i++)
    {
      
       count = 0;
        for (int j = 0; j < lench; j++)
        {
            if(arr[j] == arr[i])
            {
                count ++;
            }
        }
        if (count == 1)
           printf("%d ", arr[i]);
    }


    // for (int i = 0; i < size ; i++)
    // {
    //     printf("%d", arr[i]);
    // }

    



//  printf(" %d \n",Lanch(a)); 
//  printf(" %d \n",size); 
    return 0;
}