#include <stdio.h>

int main()
{
	int a,c,b,d, max;
   
	scanf("%d", &a); 
    
	c = a %100;  //35
    b = c % 10;  //5
    a = a/100;   //4
    d = c / 10; //3

    max = b > d ? (b > a ? b : a): d > a ? d:a;
 
    printf("%d\n",max);
    


	return 0;
}