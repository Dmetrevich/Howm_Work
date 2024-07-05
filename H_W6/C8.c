#include <stdio.h>

int main()
{
    char c;
    while( (c=getchar())!='.') 
        if(c>='A' && c<='Z') 
            putchar(c + 0x20);
            
        else
            putchar(c);
        

    return 0;
}