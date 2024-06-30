#include <stdio.h>

int main()
{
	int num,i,k;
  _Bool flag = 1;
   
	scanf("%d", &num); 

   
   
 
   while (num != 0)
   {
        i = num % 10;
         k = num / 10;
       while(k != 0)
       {
           
           if (i < k % 10 || i == k % 10)
           {
             flag = 0;
           }
            k = k / 10;
       }
       num /=10;
   }
    
           
    if (flag == 1) printf("YES\n"); 
    if (flag == 0) printf("NO\n");                 
   
    
	return 0;
}
