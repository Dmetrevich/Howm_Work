#include <stdio.h>


int Input(int arr[5][5], int n, int m)
{
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    return i;
}

void output(int arr[],int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

}


int Sum_Matr_Dig(int n, int a[n][n])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i][i];
    }
    return sum;
}


int main(void)
{
    int arr[5][5];
    Input(arr, 5, 5);
    printf("%d\n", Sum_Matr_Dig(5, arr));
    return 0;
}