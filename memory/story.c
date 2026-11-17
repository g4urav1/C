#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *story;
    int n = 100;
    int len = 0;

    story = (char *)malloc(n * sizeof(char));

    printf("Enter your story (enter ~ to stop):\n");

    while (1)
    {
        fgets(story + len, n - len, stdin);

        char *end = strchr(story + len, '~');

        if (end != NULL)
        {
            *end = '\0';
            break;
        }

        len = strlen(story);

        if (len == n - 1)
        {
            n += 100;

            char *temp = realloc(story, n * sizeof(char));

            story = temp;
        }
    }

    printf("\n\n===============Your story===============:\n%s\n", story);

    free(story);

    return 0;
}