#include <stdio.h>

int main()
{
    char c;
    while( (c=getchar())!='.') //���� ������ ����� ������
        if(c>='A' && c<='Z') //��� ������� ����� ������ �a�=97, �b�=98, �c�=99, ...
            putchar(c + 0x20);
            //putchar('A' + (c-'a'));
        else
            putchar(c);
        //    // printf("%x",c);
        //    printf("%c",c);

    return 0;
}