#include <stdio.h>
 
int  rcs(int a, int b)                              
{
    
    if (a>=b)
    {
        if (a == b) // beisec
        {
            printf("%d ", a);
            return 0;
           
        }
         printf("%d ", a);
         rcs(a - 1, b); // recur
         
    }
    else  if (a<=b)
    {
             if (a == b) //baisic
        {   
            printf("%d ", a);
            return 0;
           
        }
        printf("%d ", a);
        rcs(a + 1, b); // recur
       

    } 
 
}
 
int main(void) 
{

    int a,b;
   scanf("%d%d",&a,&b);
   rcs(a,b); 
    
         return 0;
}