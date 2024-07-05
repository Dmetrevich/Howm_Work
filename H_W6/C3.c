#include <stdio.h>
int middle(int a, int b)
{
    int res = (a+b)/2;
    
        return res;
   
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n", middle(a,b));
    return 0;
}