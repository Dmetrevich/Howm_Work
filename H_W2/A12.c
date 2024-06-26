#include <stdio.h>

int main()
{
	int a,c,R;
   
	scanf("%d", &a); 
    
	c = a %100;
    R = (a/100)+(c/10)+(c%10);
    
     printf("%d\n",R);
    


	return 0;
}
