#include <stdio.h>
int chengSt(int n,int x)
{
int  temp, dig_num = 1, res = 0;

  while (n != 0)
  {
    temp = n%x;

    res = (temp *dig_num) + res;
    dig_num*=10;

    n = n/x;
  
  }
  return res;
}


int main(void)
{
   int a,b;

  scanf("%d%d",&a,&b);

  printf("%d",chengSt(a,b));




    return 0;
}
