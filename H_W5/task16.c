#include <stdio.h>
#include <math.h>
int main()
{
	  unsigned int a,b,nod;
   
	 scanf("%d%d",&a,&b); 

	


while (a != b)
{
    if (a > b)
    {
       a = a-b;
    }
   
 else 
       b = b-a;
}

    printf("%d\n",a);

    
	return 0;
}
//Составить программу для вычисления НОД с помощью алгоритма Евклида. Даны два натуральных числа. Найти наибольший общий делитель.