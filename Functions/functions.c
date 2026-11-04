#include <stdio.h>

// void BubbleSort(int arr[], int size)
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         for (int j = 0; j < size - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }


//===============RECURSION=================


// int factorial(int num)
// {
//     if (num <= 1)
//     {
//         return 1;
//     }
//     int result = num * factorial(num - 1);
//     return result;
// }

// int sumOfDigits(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     int sum = n % 10 + sumOfDigits(n / 10);
//     return sum;
// }

// int PowerOfNum(int n, int p)
// {
//     if (p == 0)
//     {
//         return 1;
//     }
//     int result = n * PowerOfNum(n, p - 1);
//     return result;
// }


//=================SWAP BY POiNTERS============

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    //==================================QUESTION 1===========================================

    // int arr[] = {34, 65, 45, 34, 76, 43};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // BubbleSort(arr, size);

    //==================================QUESTION 2===========================================

    // int number = 10;
    // int power = 3;
    // printf("Factorial is %d\n", factorial(number));
    // printf("Sum is %d\n", sumOfDigits(number));
    // printf("result is %d\n", PowerOfNum(number, power));

    //==================================QUESTION 3===========================================

    int a = 10;
    int b = 20;

    printf("before swap a=%d and b= %d\n", a, b);

    swap(&a, &b);

    printf("after swap a=%d and b= %d", a, b);

    //==================================QUESTION 4===========================================

    //==================================QUESTION 5===========================================

    return 0;
}