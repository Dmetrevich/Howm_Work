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
 while((ch = fgetc(fr)) != EOF)
 {
        sp[i++] = ch;
        // sp[i] = '\0';
        lean ++;
 }
 sp[--lean] = '\0';
        
  
 
  fclose(fr);

  fr = fopen("output.txt", "w");

  if (fr == NULL)
  {
    puts("File open error");
    return 2;
  }
  for (size_t i = 0; i < 3; i++)
  {
    for (size_t i = 0; i < lean; i++)
    {
      fprintf(fr, "%c", sp[i]);
    }
    if (i < 2)
      fprintf(fr, ", ");
    else
      fprintf(fr, " ");
  }
  fprintf(fr, "%d\n", lean);
  fclose(fr);
  return 0;
}