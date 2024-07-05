#include <stdio.h>
int summ_chot(int a)
{
    int res,summ;
     while (a != 0)
    {
        summ += a%10;
        a /=10; 
    }
       if(summ%2 == 0)  printf("YES");
       else printf("NO");
     

   
}
int main()
{
    int a;
    scanf("%d",&a);
    //printf("%d\n",summ_chot(a));
    summ_chot(a);
    return 0;
}