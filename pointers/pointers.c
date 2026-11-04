#include <stdio.h>
#include <limits.h>

int main()
{
    //==================================QUESTION 1===========================================

    // int a = 10;
    // int *b = &a;
    // printf("%d\n", a);
    // // printf("%p\n", &a); //to verify address
    // printf("%p\n", b);
    // printf("%d\n", *b);

    
    //==================================QUESTION 2===========================================

    // int a = 2;
    // int b = 3;
    // int *ptrA = &a;
    // int *ptrB = &b;
    // printf("before swap a:%d b:%d\n", a, b);
    // *ptrA = *ptrA + *ptrB;
    // *ptrB = *ptrA - *ptrB;
    // *ptrA = *ptrA - *ptrB;
    // printf("after swap a:%d b:%d", a, b);


    //==================================QUESTION 3===========================================

    // int a;
    // int b;
    // scanf("%d %d", &a ,&b);
    // int *ptrA = &a;
    // int *ptrB = &b;
    // int sum = *ptrA + *ptrB;
    // printf("SUM %d", sum);


    //==================================QUESTION 4===========================================

    // int a;
    // int b;
    // int c;
    // scanf("%d %d %d", &a, &b, &c);
    // int *ptrA = &a;
    // int *ptrB = &b;
    // int *ptrC = &c;
    // int greater;
    // if (*ptrA > *ptrB && *ptrA > *ptrC)
    // {
    //     greater = *ptrA;
    // }
    // else if (*ptrB > *ptrA && *ptrB > *ptrC)
    // {
    //     greater = *ptrB;
    // }
    // else
    // {
    //     greater = *ptrC;
    // }
    // printf("Greater: %d\n", greater);


    //==================================QUESTION 5===========================================

    // int arr[] = {10, 20, 30, 40, 50};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d ", *(arr + i));
    // }


    //==================================QUESTION 6===========================================

    // int arr[] = {10, 40, 30, 20, 50};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // int *start = &arr[0], *end = &arr[size - 1];
    // int temp;
    // while (start < end)
    // {
    //     temp = *start;
    //     *start = *end;
    //     *end = temp;
    //     // start++;
    //     // end--;
    // }
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d ", *(arr + i));
    // }


    //==================================QUESTION 7===========================================

    // int arr[] = {45, 44, 30, 25, 50, 46, 35, 68, 34};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // int odd = 0;
    // int even = 0;
    // for (int i = 0; i < size; i++)
    // {
    //     if (*(arr + i) % 2 != 0)
    //     {
    //         odd++;
    //     }
    //     else
    //     {
    //         even++;
    //     }
    // }
    // printf("odd:%d & Even:%d", odd, even);


    //==================================QUESTION 8===========================================

    // int arr[] = {45, 44, 30, 25, 50, 46, 35, 68, 34};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // int min = INT_MAX;
    // int max = INT_MIN;
    // for (int i = 0; i < size; i++)
    // {
    //     if (*(arr + i) < min)
    //     {
    //         min = *(arr + i);
    //     }
    //     else if (*(arr + i) > max)
    //     {
    //         max = *(arr + i);
    //     }
    // }
    // printf("maximun:%d & minimum:%d", max, min);

    //==================================QUESTION 9===========================================

    // int a = 10;
    // int *ptr = &a;
    // int **mainPtr = &ptr;
    // printf("%d\n", a);
    // printf("%d\n", *ptr);
    // printf("%d\n", **mainPtr);

    return 0;
}