#include <stdio.h>
#include <math.h>
int main()
{
	int a = 1, b = 1 ,f ,n = 0, count = 0;
   
	scanf("%d",&f); 
 
        while (count < f)
        {

            a = b;
            b = n;
            n = a + b;
            count ++;
            printf("%d ",n);
        }
   	        
     

	// if (summ == 10)printf("YES");

	// else printf("NO");

        
   
	return 0;
}


   	  
