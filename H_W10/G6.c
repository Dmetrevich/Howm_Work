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

    puts(sp);

    fclose(fr);
    int nlen = 0;

    int k = 1, flag = 0;

    for (size_t i = 0, j = lean - 2; i < lean - 1; i++, j--)
    {

        if (sp[i] != sp[j])
        {
            flag = 1;
        }

        k++;
    }

    // flag == 1 ? printf("NO") : printf("YES");

    fr = fopen("output.txt", "w");

    if (fr == NULL)
    {
        puts("File open error");
        return 2;
    }

    flag == 1 ? fprintf(fr, "NO") : fprintf(fr, "YES");
    fclose(fr);
    return 0;
}