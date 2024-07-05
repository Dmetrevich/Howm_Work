#include <stdio.h>
unsigned long long int is_sum(int num)
{
   unsigned long long int res = 1;
   int a = 2;
            for(int i = 2; i <= num; ++i) 
            {
                res *= a;
            }
      
   
    return res;
}
int main()
{
    int num;
    
    scanf("%d", &num);
  
     printf("%llu\n",is_sum(num));
    
    
    return 0;
}