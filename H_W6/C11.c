#include <stdio.h>
#include <math.h>
int nod(int a, int b)
{
    
     while (a != b)
{
    if (a > b)
    {
       a = a-b;
    }
    else 
       b = b-a;
}
 return a;
}



int main()
{
	  int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n",nod(a,b));

    
	return 0;
}
