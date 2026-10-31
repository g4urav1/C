#include <stdio.h>

int main()
{
    int n;
    printf("Enter no of elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter value of %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("The array elements are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    //===================SORTING STARTED=========================//

    // int key, j;

    //     for (int i = 1; i < n; i++)
    // {
    //     key = arr[i];
    //     j = i - 1;

    //     while (j >= 0 && arr[j] > key)
    //     {
    //         arr[j + 1] = arr[j];
    //         j--;
    //     }
    //     arr[j + 1] = key;
    // }

    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    //===================SORTING ENDED=========================//

    printf("The sorted array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}