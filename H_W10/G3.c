
#include <stdio.h>
#include <string.h>

int main(void)
{
  char sp[1000];
  FILE *fr = fopen("input.txt", "r");
  if (fr == NULL)
  {
    puts("File open error");
    return 2;
  }
  char ch;
  int i = 0, lean = 0;
  while ((ch = fgetc(fr)) != EOF)
  {
    sp[i++] = ch;
    sp[i] = '\0';
    lean++;
  }

  fclose(fr);

  int cont[100];
  int *ptr = cont;
  int counter = 0;

  for (int i = lean - 1, j = i - 1; i >= 0; i--, j--)
  {
    if (sp[lean - 2] == sp[i])
    {
      ptr[counter] = i;
      counter++;
    }
  }
  fr = fopen("output.txt","w");

        if(fr == NULL) 
            {
            puts("File open error");
            return 2;
            }

  for (int i = counter - 1; i > 0; i--)
  {
    fprintf(fr,"%d ", ptr[i]);
  }
 fclose(fr);
  return 0;
}