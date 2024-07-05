#include <stdio.h>
int is_sum(int num)
{
   unsigned long  int res = 1;
   
            for(int i = 2; i <= num; i++) 
            {
                res +=i;
            }
      
   
    return res;
}
int main()
{
    int num;
    
    scanf("%d", &num);
  
     printf("%d\n",is_sum(num));
    
    
    return 0;
}