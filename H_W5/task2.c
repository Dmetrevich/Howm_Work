#include <stdio.h>
#include <math.h>
int main()
{
	int min_treshHold, max_treshHold;
   
	scanf("%d%d", &min_treshHold,&max_treshHold); 

int a,b,c;
   
        for (;min_treshHold <= max_treshHold; min_treshHold++)
        {
          
            b =  pow(min_treshHold, 2);
           
             printf("%d ",b);
           
              
 
        }
        
	return 0;
}
