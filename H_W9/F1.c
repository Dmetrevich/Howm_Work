
#include <stdio.h>
#include <locale.h>


// int Input(int arr[], int n)
// {
//     int i;
//     for (i = 0; i < n; i++ )
//     {
//         scanf("%d", &arr[i]);
//     }
//     return i;
// }

// void output(int arr[],int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }

// }

//===================
void sort_array(int size, int a[])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                int x = a[j];
                a[j] = a[j+1];
                a[j+1] = x;
            }
        }
    }
}
//===================

// int main()
// {
    
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     Input(arr, n);
//     bubble_sort_array(n, arr);
//     output(arr, n);
//     return 0;
// }
