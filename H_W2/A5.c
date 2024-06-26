#include <stdio.h>

int main()
{
	int a,b,c,d;
    double v;

	scanf("%d%d%d", &a, &b, &c);

	d=a+b+c;
    v = (float)d/3;
    
	printf("%.2f\n", v);
    


	return 0;
}