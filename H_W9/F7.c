#include <stdio.h>

int Input(int arr[], int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  return i;
}

void PrintArr(int arr[], int n)
{

  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
}


int compression(int a[], int b[], int N)
{
    int count = 1;
    int n = 0;
    if (a[0] == 1)
    {
        b[0] = 0;
        n = 1;
    }
    for (int i = 1; i < N; i++)
    {
        if (a[i-1] == a[i])
        {
            count++;
        }
        else
        {
            b[n] = count;
            count = 1;
            n++;
        }
    }
    b[n] = count;
    n++;
    return n;
}
int main(void)
{
    enum {n = 1000};
    int arr1[n] = {1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 1, 0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1 ,0 ,0 ,1 ,0 ,1 ,0 ,1 ,0 ,0 ,1 ,0 ,1 ,1 ,1 ,0 ,0 ,1 ,0 ,1 ,1 ,0 ,1 ,0 ,0 ,0 ,1 ,0 ,1 ,0 ,1 ,1 ,0 ,1 ,1 ,1 ,1 ,0 ,0 ,0 ,1 ,0 ,0 ,0 ,0 ,1 ,1};
    int arr2[n];
    int len = 0;
    //Input(arrA, n);
    len = compression(arr1, arr2, n);
    printf("%d.\n",len);
    PrintArr(arr2, len);
    return 0;
}