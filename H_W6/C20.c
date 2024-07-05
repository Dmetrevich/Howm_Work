#include <stdio.h>


int main()
{
    char c;
    int sum=0;
    
while( (c=getchar())!='\n') 
{
    if ( c=='(' ) sum ++;
    if (c== ')' ) sum--;
    if (sum == -1) 
    return  printf("NO");
}
       (sum ==0) ? printf("YES") : printf("NO");
        
     
    return 0;
}

