#include <stdio.h>

int main()
{
	int a;
   
	scanf("%d", &a); 
    
    char result;

    if (a == 12 || a <= 2 )
    {
        printf("winter");
    }
    else if (a == 3 || a <= 5 )
    {
        printf("spring");
    }
    else if (a == 6 || a <= 8 )
    {
        printf("summer");
    }
    else if (a == 9 || a <= 11 )
    {
        printf("autumn");
    }
       

	return 0;
}