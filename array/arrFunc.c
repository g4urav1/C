
// FIND

#include <stdio.h>

// ===============PRINT(arr)==============
void PRINT(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
//==================PUSH==================
void PUSH(int arr[], int count)
{
    int element;

    printf("Enter element to push in array: ");
    scanf("%d", &element);

    arr[count] = element;
    count++;

    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nLength= %d ", count);
    printf("\n");
}
//==================POP===================
void POP(int arr[], int count)
{
    count--;

    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nLength= %d ", count);
}
//===================SHIFT================
void shift(int arr[], int count)
{

    int index = 0;
    count++;
    for (int i = count; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }

    int element;

    printf("Enter element in array: ");
    scanf("%d", &element);

    arr[index] = element;

    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nLength= %d ", count);
}
//===================UNSHIFT==============
void unshift(int arr[], int count)
{

    int index = 0;
    for (int i = index; i < count - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    count--;

    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nLength= %d ", count);
}
// ============FIND=======================
void FIND(int arr[], int n)
{
    int el, found = 0;

    printf("Enter element to find: ");
    scanf("%d", &el);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == el)
        {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("Element don't exist in this array\n");
    }
}

int main()
{
    int n = 6;

    int arr[] = {3, 5, 6, 7, 5, 6};

    // PRINT(arr, n);
    // POP(arr, n);
    // PUSH(arr, n);
    // shift(arr, n);
    // unshift(arr, n);
    FIND(arr, n);

    return 0;
}