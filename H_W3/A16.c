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
//        int X1, X2, X3;

//     scanf("%d%d%d", &X1, &X2, &X3);
// /*  if (X2>X1 && X3>X2)
//     {
//         printf("YES");4
//         3

//     }
//     else
//     {
//         printf("NO");
//     }*/

//     int line;
//     line = ((X3 > X2) && (X2 >X1)) ? 1 : 0;
//     printf("%s", line ? "YES" : "NO");

    

	return 0;
}