#include <stdio.h>

int main()
{
    int n, temp_n,fl = 0, i;
  
    scanf("%d",&n);
        while (n != 0)
        {
                i = n %10;
                 temp_n = n/10;
                while (temp_n !=0) 
                {
                    if (i == (temp_n%10))
                    {
                          printf("YES\n");
                          return 0;
                    }
                     temp_n = temp_n/10;
                }
             
            n = n /10;

        }    
printf("NO\n");
    
    return 0;
}