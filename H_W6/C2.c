#include <stdio.h>

int powe(int a, int b)
{
scanf("%d%d",&a,&b);
int res = 1;
for(int i = 1; i <= b; i ++)
{
 res *= a ;
}
 return res;
}




int main()
{
    int a,b;
    
    printf("%d",powe(a,b));

    return 0;
}