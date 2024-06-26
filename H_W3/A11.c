#include <stdio.h>

int main()
{
	int a,b,c,d,e,min,max;
   	
     
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e); 

         min =  a<b ? (a<c ?a :c) : b<c ? b:c;
         min = d<min ? (d<e ? d:e) :(e<min ?e:min);

        max =  a>b ? (a>c ?a :c) : b>c ? b:c;
        max = d>max ? (d>e ? d:e) :(e>max ?e:max);

    int summ = min + max;

    
    printf("%d\n",summ);

	return 0;
}
