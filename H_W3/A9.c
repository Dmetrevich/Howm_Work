
#include <stdio.h>

int main()
{
	int a,b,c,d,e,max;
   	
     
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e); 

         max =  a>b ? (a>c ?a :c) : b>c ? b:c;
         max = d>max ? (d>e ? d:e) :(e>max ?e:max);

    
    printf("%d\n",max);
     

	return 0;
}