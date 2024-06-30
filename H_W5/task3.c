#include <stdio.h>
#include <math.h>
int main()
{
	int i_treshHold,a_treshHold;
   
	scanf("%d%d", &i_treshHold,&a_treshHold); 

int b,summ = 0;
 if ((i_treshHold && a_treshHold) %100 < 100)
    {
   
        for (;i_treshHold <= a_treshHold; i_treshHold++)
        {
           
            b =  pow(i_treshHold, 2);
           
            summ += b;

            //printf("%d ",b);
           
           
        }
         printf("%d ",summ);
    }
	return 0;
}
