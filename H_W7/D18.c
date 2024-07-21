#include <stdio.h>
void print_N(int n);

int main()
{
   int n = 0;
    scanf("%d", &n);
 if (n == 0)
    {
        printf("0");
    }
    if (n != 0)
    {
         print_N(n);
    }
     

   

    return 0;
}

void print_N(int n)
{
     
    
    if(n != 1) 
   
   
      print_N(n/10); 
      printf("%d " ,n%10); 
    
    
}
//   .\D11.exe