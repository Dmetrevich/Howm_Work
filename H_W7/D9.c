#include <stdio.h>



int number(int x)
{
      
      int sum;
 
         if(x <=1 ) 
         return 1;
       
  return   x%10 + number(x/10);
 
}



int main(void) 
{
 int a ;
     scanf("%d",&a);

    
     printf("%d ",number(a));
  
      
         return 0;
}