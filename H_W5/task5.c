#include <stdio.h>
#include <math.h>
int main()
{
	int a,b = 0,summ = 0;
   
	scanf("%d",&a); 

        while (a != 0)
        {
            b = a%10;
            a /=10;
            summ += b;
        }
   	        
       printf("%d ",summ);
    
   
	return 0;
}
//Ввести целое число и найти сумму его цифр.