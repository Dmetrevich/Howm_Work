#include <stdio.h>

int main(void) 
{
    int a1, a2, b1, b2;
    float K, B;

    scanf("%d%d%d%d", &a1, &b1, &a2, &b2);

	K = (float)(b2-b1)/(a2-a1);
	B = b1-K*a1;

    printf("%.2f %.2f", K, B);
    return 0;
}