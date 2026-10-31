#include <stdio.h>

int main()
{
    int op;
    int givenrollNo;
    char name[50];
    int paid;
    while (1)
    {
        printf("1. See Fee Status\n");
        printf("2: Submit fee\n");
        printf("3: Exit\n");
        printf("Enter Operation: ");

        scanf("%d", &op);

        if (op == 1)
        {

            printf("Enter Your Roll no: ");
            scanf("%d", &givenrollNo);

            FILE *fpr = fopen("record.txt", "r");
            if (fpr != NULL)
            {
                int rollNo;
                int found = -1;
                while (fscanf(fpr, "%d %s %d", &rollNo, name, &paid) == 3)
                {
                    if (givenrollNo == rollNo)
                    {
                        printf("Fee Status: %s \n", paid == 1 ? "Your fee has been PAID" : "Your fee has NOT been PAID");
                        found = 0;
                    }
                }
                if (found != 0)
                {
                    printf("No Student with the given roll no\n");
                }
            }
            else
            {
                printf("Couldn't read file");
            }
            fclose(fpr);
        }
        else if (op == 2)
        {
            printf("Enter Your Roll no: ");
            scanf("%d", &givenrollNo);

            FILE *fpr = fopen("record.txt", "r");
            if (fpr != NULL)
            {
                int rollNo;
                while (fscanf(fpr, "%d %s %d", &rollNo, name, &paid) == 3)
                {

                    FILE *fpw = fopen("temp.txt", "a");
                    if (fpw != NULL)
                    {
                        if (givenrollNo == rollNo)
                        {
                            if (paid == 1)
                            {
                                printf("fee already paid \n");
                            }
                            else
                            {
                                fprintf(fpw, "%d %s 1 \n", rollNo, name);
                                printf("fee successfully paid \n");
                            }
                        }
                        else
                        {
                            fprintf(fpw, "%d %s %d \n", rollNo, name, paid);
                        }
                        fclose(fpw);
                    }
                    else
                    {
                        printf("Couldn't write file");
                    }
                }
                fclose(fpr);
                remove("record.txt");
                rename("temp.txt", "record.txt");
            }
            else
            {
                printf("Couldn't read file");
            }
        }
        else if (op == 3)
        {

            printf("========EXECUTION COMPLETED========\n");
            break;
        }
        else
        {
            printf("Invalid Command\n");
        }
    }
    return 0;
}