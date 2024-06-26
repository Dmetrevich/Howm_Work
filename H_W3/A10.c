#include <stdio.h>

int main()
{
	int a,b,c,d,e,min;
   	
     
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e); 

         min =  a<b ? (a<c ?a :c) : b<c ? b:c;
         min = d<min ? (d<e ? d:e) :(e<min ?e:min);

       
    printf("%d\n",min);
     

	return 0;
}
