#include <stdio.h>
int main() 
{
    int a, max = 0,min = 9;
    scanf("%d",&a);
    
    while (a > 0) {
       // max = a%10;
       // a = a/10;
        if (a%10 > max) max = a%10;
           if (a%10 < min) min = a%10;
          
        
                  
        a = a/10;
    }
    
    printf("%d %d\n",min,max);

    return 0;
}