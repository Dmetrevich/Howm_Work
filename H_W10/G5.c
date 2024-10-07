#include <stdio.h>
#include <string.h>

int main(void)
{
    char sp[220], out[100];
    FILE *fr = fopen("input.txt", "r");
    if (fr == NULL)
    {
        puts("File open error");
        return 2;
    }
    //_______________
    char ch;
    int i = 0, lean = 0;
    while ((ch = fgetc(fr)) != EOF)
    {
        sp[i++] = ch;
        sp[i] = '\0';
        lean++;
    }
    //--------------

    fclose(fr);
    int nlen = 0;
    for (size_t i = 0; i < lean; i++)
    {
        printf("%c", sp[i]); /* code */
    }
    int k = 1, flag = 0, flag2 = 0;
    char c = ' ';
    for (size_t i = 0; i < lean - 1; i++)
    {
        if (sp[i] == 'A' || sp[i] == 'a')
        {
            sp[i] += 1;
        }

        else if (sp[i] == 'B' || sp[i] == 'b')
        {
            sp[i] -= 1;
        }
    }
    //===============
    for (size_t i = 0; i < lean; i++)
    {
        printf("%c", sp[i]);
    }

    fr = fopen("output.txt", "w");

    if (fr == NULL)
    {
        puts("File open error");
        return 2;
    }
    
        for (size_t i = 0; i < lean; i++)
        {
            fprintf(fr, "%c", sp[i]);
        }
   
    fclose(fr);
    return 0;
}