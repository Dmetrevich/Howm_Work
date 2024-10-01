/*#include <stdio.h>


int Input(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++ )
    {
        scanf("%d", &arr[i]);
    }
    return i;
}

void PrintArr(int arr[],int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

}
*/

int Find_second_num(int size, int a[])
{
    int d = 0;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (a[i] == a[j])
            {
            d = 1;
            break;
            }
        }

    }
    return d;
}

/*
int main(void)
{
    int n, numb = 0;
    scanf("%d", &n);
    int arr[n];
    Input(arr, n);
    numb = Find_second_num(n, arr)
    if (numb == 1)
    printf("YES");
    else
     printf("NO");

    return 0;
}
*/