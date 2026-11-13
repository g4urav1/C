// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter no of elements: ");
//     scanf("%d", &n);

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter value of %d element: ", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     printf("The array elements are: ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     //===================SORTING STARTED=========================//

//     // int key, j;

//     //     for (int i = 1; i < n; i++)
//     // {
//     //     key = arr[i];
//     //     j = i - 1;

//     //     while (j >= 0 && arr[j] > key)
//     //     {
//     //         arr[j + 1] = arr[j];
//     //         j--;
//     //     }
//     //     arr[j + 1] = key;
//     // }

//     int temp;
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     //===================SORTING ENDED=========================//

//     printf("The sorted array is: ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

#include <stdio.h>
int partition(int arr[], int st, int end)
{
    int index = st - 1, pivot = arr[end];

    for (int i = st; i < end; i++)
    {
        if (arr[i] <= pivot)
        {
            index++;

            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
        }
    }
    index++;
    int temp = arr[end];
    arr[end] = arr[index];
    arr[index] = temp;

    return index;
}

int QuickSort(int arr[], int st, int end)
{
    if (st < end)
    {
        int pvtIndex = partition(arr, st, end);
        QuickSort(arr, st, pvtIndex - 1);
        QuickSort(arr, pvtIndex + 1, end);
    }
}

int main()
{
    int arr[] = {3, 5, 2, 7, 4, 7, 3, 1, 9, 0};
    int st = 0;
    int end = 9;
    QuickSort(arr, st, end);

    printf("Sorted array: ");
    for (int i = 0; i <= end; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}