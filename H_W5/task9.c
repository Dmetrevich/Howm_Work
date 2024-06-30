#include <stdio.h>

int main()
{
	int num;
     int count = 0, temp = 0;
   
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
      
   }

   if (count != 0)
        {
                printf("NO\n"); 
        }
   else
        {
             printf("YES\n"); 
        }
   

	return 0;
}
