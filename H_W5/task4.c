#include <stdio.h>
#include <math.h>
int main()
{
	int a,b = 0;
   
	scanf("%d",&a); 

	while (a != 0)
        {
            a = a/10;
            b ++;
        }

   	    if (b == 3) printf("YES");
		if (b != 3) printf("NO");
    
   
	return 0;
}
