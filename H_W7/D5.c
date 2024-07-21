#include <stdio.h>
void pas_bin(int n);

int main()
{
int a;
    scanf("%d", &a);
    pas_bin(a); 
    return 0;
}

void pas_bin(int n)
{
   
    if(n > 1) 

    pas_bin(n/2);  
     printf("%d", n%2);
}
//.\D5.exe