#include <stdio.h>
void simpi_div(int n);

int main()
{

int num;
    
   // printf("Enter number - ");
    scanf("%d", &num);
    simpi_div(num);
     
      
    return 0;
}
void simpi_div(int n)
{
 int  divisor = 2;
 while(n != 1)
 {

  
        while (n % divisor == 0)  // if  else
        {
            printf(" %d", divisor);
             n /= divisor;
        }
    divisor += 1;
 }
   printf ("\n");

}        
// .\simpl_divi.exe
