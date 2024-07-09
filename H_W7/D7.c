#include <stdio.h>



int  number(int x)
{
        
   
        if (x<= 0)
        return 0;
         printf("%d ",x);         
         number(x-1);
     
     
}



int main(void) 
{
 int a;
  scanf("%d",&a);

  number(a);
      
         return 0;
}