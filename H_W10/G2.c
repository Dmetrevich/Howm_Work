#include <stdio.h>
#include <string.h>
 
int main(void) 
{
   
        char ch = 'A';
        int counter;
        int n = 2,c = 0;

     FILE * fr = fopen("input.txt","r");

         if(fr == NULL)    
            { puts("File open error");
              return 2;
            }

        fscanf(fr,"%d",&counter);
        fclose(fr);

    fr = fopen("output.txt","w");

        if(fr == NULL) 
            {
            puts("File open error");
            return 2;
            }
        
        for (int i = 0; i < counter; i++)
              {
                if(counter % 2 != 0 && i == counter - 1){
                  fprintf(fr,"%c", ch + c);
                  break;
                }
                else{
                  fprintf(fr,"%c%d", ch + c, n);
                }
                c += 1;
                if (n < 10)
                n += 2;
                if (n == 10)
                n = 2;
                i++;
              }
        fclose(fr);
       
         
return 0;
}