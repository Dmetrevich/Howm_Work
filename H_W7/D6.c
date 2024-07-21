
#include <stdio.h>
void string_bag();

int main()
{
    string_bag(); 
    return 0;
}

void string_bag(void)
{
    char a;
    scanf("%c", &a);
    if(a == '.') 
    return;
    string_bag();  
    printf("%c", a);
}
//  .\D6.exe