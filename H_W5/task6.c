#include <stdio.h>

int main()
{
	int num;
     int count = 0, temp = 0;
   
	scanf("%d", &num); 


    int i,j = 0;

   while (num != 0)
   {
       
        i = num%10;
        num = num/10;
        
       if (j == i)  
        {
            count = 1;
        }
        
        j = i;
             
    

   }

   if (count == 1)
        {
                printf("YES\n"); 
        }
   else
        {
             printf("No\n"); 
        }
   

	return 0;
}
