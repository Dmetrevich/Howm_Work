#include <stdio.h>

int main()
{


int rev=0,n;

 scanf("%d",&n);
                
         while(n)
        {
            rev=10*rev+n%10;
            n/=10;
        }
                
         printf("%d",rev);



return 0;
}
//������ ����� ����� � ������������� ���, ��� ����� ������ ����� ����� ��������� � �.�.