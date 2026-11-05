#include <stdio.h>
#include <limits.h>

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

// void swap(int *x, int *y)
// {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

//===============MIN MAX AVG=====================

// int MinMaxAvg(int *arr, int size)
// {
//     int min = INT_MAX;
//     int max = INT_MIN;
//     int sum;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//         sum = sum + arr[i];
//     }
//     int avg = sum / size;
//     printf("%d\n", min);
//     printf("%d\n", max);
//     printf("%d\n", avg);
// }

//==============CALCULATOR======================

// int Calculator(int op, int *a, int *b)
// {
//     int result;

//     if (op == 1)
//     {
//         result = *a + *b;
//     }
//     else if (op == 2)
//     {
//         result = *a - *b;
//     }
//     else if (op == 3)
//     {
//         result = *a * *b;
//     }
//     else if (op == 4)
//     {
//         result = *a / *b;
//     }
//     else
//     {
//         printf("INVALID OPERATION");
//     }

//     printf("%d", result);
// }

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

    // int a = 10;
    // int b = 20;
    // printf("before swap a=%d and b=%d\n", a, b);
    // swap(&a, &b);
    // printf("after swap a=%d and b=%d", a, b);

    //==================================QUESTION 4===========================================

    // int arr[] = {2, 4, 6, 7, 3, 8};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // MinMaxAvg(arr, size);

    //==================================QUESTION 5===========================================

    // int op, a, b;

    // printf("1. Add \n");
    // printf("2. Subtract \n");
    // printf("3. Multiply\n");
    // printf("4. Divide\n");
    // printf("\nEnter Operation: ");
    // scanf("%d", &op);

    // printf("Enter First Number: ");
    // scanf("%d", &a);
    // printf("Enter Second Number: ");
    // scanf("%d", &b);

    // Calculator(op, &a, &b);

    return 0;
}