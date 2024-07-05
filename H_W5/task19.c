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
   	        
     

	if (summ == 10)printf("YES");

	else printf("NO");

        
   
	return 0;
}


   	  //¬вести натуральное число и определить, верно ли, что сумма его цифр равна 10.
