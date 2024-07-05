#include <stdio.h>

int main()
{
	 unsigned int a,count = 0, res;
   

   do
   {
     scanf("%d", &a);

        if (a > 0 )
        {
            count ++;
        }

   } while (a !=0);
   
res = count;

	 printf("%d", res ); 


	return 0;
}
//Дана последовательность ненулевых целых чисел, в конце последовательности число 0. Посчитать количество чисел.