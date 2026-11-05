#include <stdio.h>
#include <string.h>

int main()
{
    //================QUESTION 1 ===================

    // char ch[] = "HELLO";

    // int size = (sizeof(ch) / sizeof(ch[0])) - 1;

    // printf("%d", size);

    //================QUESTION 2 ===================

    char ch[] = "HELLO BOI";
    int size = (sizeof(ch) / sizeof(ch[0])) - 1;

    char *start = &ch[0], *end = &ch[size - 1];
    int temp;
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%c", ch[i]);
    }

    return 0;
}