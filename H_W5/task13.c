#include <stdio.h>

int main()
{
	int num;
    int count = 0,count1 = 0, temp = 0;
   
	scanf("%d", &num); 


    int i,j = 9;

   while (num != 0)
   {
       
        i = num%2;
        num = num/10;
        
        if (i == 1)  
        {
            count ++;
        }
        if (i == 0)  
        {
            count1 ++;
        }
      
   }

    printf("%d %d\n",count1,count); 


	return 0;
}
//Посчитать количество четных и нечетных цифр числа.