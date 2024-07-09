#include <stdio.h>



int  number(int x)
{
        
   
        if (x<= 0)
       return 0;
         
              number(x-1);
       printf("%d ",x);
 
      
}



int main(void) 
{
 int a;
  scanf("%d",&a);

  number(a);
      
         return 0;
}