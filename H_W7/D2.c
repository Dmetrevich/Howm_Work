#include <stdio.h>



int number(int x)
{
   
         if(x>0)
         
       return  x + number(x-1);

}



int main(void) 
{
 int a ;
   scanf("%d",&a);

    
     printf("%d ",number(a));
   
      
         return 0;
}