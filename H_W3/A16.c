#include <stdio.h>

int main()
{
	int a, b, c;
   
	scanf("%d%d%d", &a, &b, &c); 
    
    char result;

    if ((c > b) && (c > a) ) result = 1;
    
        if(result == 1)
        {
          result =  printf("YES");
        }
        else
        {
             printf("NO");
        }


	return 0;
}