#include <stdio.h>
  
  int grow_up(int num)
  {
    int i,k;
    _Bool flag = 1;

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
  return  (flag == 1) ? printf("YES\n"): printf("NO\n");  
  }


int main()
{
	
    int num;
	scanf("%d", &num); 

  printf("\n",grow_up(num));  


   
   
 
   
           
           
    
           
    
   
    
	return 0;
}
