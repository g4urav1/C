#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *ptr;

    // 1. malloc()
    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("\nEnter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("\nUsing malloc:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    // 2. calloc()
    int *ptr2 = (int*)calloc(n, sizeof(int));


    printf("\n\nUsing calloc:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr2[i]);
    }

    // 3. realloc()
    ptr = (int*)realloc(ptr, (n + 2) * sizeof(int));


    printf("\n\nEnter 2 more elements:\n");
    for (i = n; i < n + 2; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("\nAfter realloc:\n");
    for (i = 0; i < n + 2; i++) {
        printf("%d ", ptr[i]);
    }

    // 4. free()
    free(ptr);
    free(ptr2);

    printf("\n\nMemory released successfully!");

    return 0;
}
