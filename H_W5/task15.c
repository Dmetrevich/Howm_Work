#include <stdio.h>

int main()
{
	 unsigned int a,count = 0, res;
   

   do
   {
     scanf("%d", &a);

        if (a % 2 == 0 )
        {
            count ++;
        }

   } while (a !=0);
   
res = count;

	 printf("%d", res - 1); 


	return 0;
}
