#include <stdio.h>

int main()
{
    // FILE *fpw = fopen("file.txt", "w");
    // if (fpw != NULL)
    // {
    //     fprintf(fpw, "HELLO WORLD! from the file management program.\n");
    //     fclose(fpw);
    // }
    // else
    // {
    //     printf("Couldn't write file");
    // }

    // FILE *fpr = fopen("file.txt", "r");
    // if (fpr != NULL)
    // {
    //     char ch;
    //     while ((ch = fgetc(fpr)) != EOF)
    //     {
    //         printf("%c", ch);
    //     }
    //     fclose(fpr);
    // }
    // else
    // {
    //     printf("Couldn't read file");
    // }

    // rename("file.txt", "data.txt");
    remove("data.txt");
}