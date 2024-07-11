#include <stdio.h>
 
int rcs(int x)  //void 
{
int _t;

       if(x <= 0) return 0; 

       _t = x%10;
             
       rcs(x/10);
       printf("%d ", _t);
}
 
int main(void) 
{
   int num;
   scanf("%d",&num);
  
   (num == 0 ) ?  printf("0"):rcs(num);

       
   
         return 0;
}