#include <stdio.h>
int  bin(double n)
{
    if (n == 0)  return 0;
    if (n == 1)  return 1;
    if( n > 1 && n < 2 ) return 0;

     else
    return  bin(n/2);

}
int main()
{
    int a;
  scanf("%d", &a);
  (bin(a)== 1) ? printf("YES"): printf("NO");;
   //printf("%d ", bin(a));
   //bin(a);
    return 0;
}


