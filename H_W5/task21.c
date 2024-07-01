#include <stdio.h>

int main()
{
    char c;
    while( (c=getchar())!='.') //спец символ новой строки
        if(c>='A' && c<='Z') //все символы лежат подр€д СaТ=97, СbТ=98, СcТ=99, ...
            putchar(c + 0x20);
            //putchar('A' + (c-'a'));
        else
            putchar(c);
        //    // printf("%x",c);
        //    printf("%c",c);

    return 0;
}