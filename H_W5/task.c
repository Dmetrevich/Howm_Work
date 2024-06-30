#include <stdio.h>
#include <math.h>
int main()
{
	int treshHold;
   
	scanf("%d", &treshHold); 

int a,b,c;
   
        for (int i = 1;i <= treshHold; i++,a++)
        {
            a =  pow(i, 1);
            b =  pow(i, 2);
            c =  pow(i, 3);
            printf("%d %d %d\n",a,b,c);
           
 
        }
        
	return 0;
}
