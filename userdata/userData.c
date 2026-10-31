#include <stdio.h>
#include <string.h>

struct user
{
    char name[50];
    char email[50];
    char password[20];
    int age;
    char tasks[10][100];
    int NoOfTask;
};

int main()
{
    struct user users[20];
    int count = 0;

    while (1)
    {
        int whattodo;
        printf("\n=========== select ========\n");
        printf("1. Signup \n");
        printf("2. Login \n");
        printf("3. Users List\n");
        printf("4. Exit \n");
        printf("Choose an option: ");
        scanf("%d", &whattodo);

        char ch;
        while (ch = getchar() != '\n')
            ;

        if (whattodo == 4)
        {
            printf("========EXECUTION COMPLETED=========\n");
            break;
        }

        if (whattodo == 1)
        {
            if (count >= 20)
            {
                printf("Not Enough Space\n");
                continue;
            }

            printf("Enter Name (no spaces): ");
            scanf("%s", users[count].name);

            printf("Enter Password (no spaces): ");
            scanf("%s", users[count].password);

            printf("Enter Email: ");
            scanf("%s", users[count].email);

            printf("Enter Age: ");
            scanf("%d", &users[count].age);

            users[count].NoOfTask = 0;

            FILE *fpa = fopen("users.txt", "a");
            if (fpa != NULL)
            {
                fprintf(fpa, "%s %s %s %d \n", users[count].name, users[count].password, users[count].email, users[count].age);
                fclose(fpa);
            }
            else
            {
                printf("Couldn't write file");
            }

            count++;
            printf("Signed In Successfully!\n");
        }
        else if (whattodo == 2)
        {
            char mail[50];
            char pass[20];
            int found = -1;

            printf("Enter Email: ");
            scanf("%s", mail);

            printf("Enter Password: ");
            scanf("%s", pass);

            for (int i = 0; i < count; i++)
            {
                if (strcmp(mail, users[i].email) == 0 && strcmp(pass, users[i].password) == 0)
                {
                    found = i;
                    break;
                }
            }
            if (found != -1)
            {
                printf("Welcome %s!\n", users[found].name);

                int choice;

                while (1)
                {
                    printf("\n=========== MENU ========\n");
                    printf("1. View Tasks\n");
                    printf("2. Add Tasks\n");
                    printf("3. Logout\n");
                    printf("Choose an option: ");
                    scanf("%d", &choice);

                    char ch;
                    while ((ch = getchar()) != '\n')
                        ;

                    if (choice == 1)
                    {
                        printf("\n----------TASKS-----------\n");

                        if (users[found].NoOfTask == 0)
                        {
                            printf("No tasks yet.\n");
                        }
                        else
                        {
                            for (int i = 0; i < users[found].NoOfTask; i++)
                            {
                                printf("- %s\n", users[found].tasks[i]);
                            }
                        }
                    }
                    else if (choice == 2)
                    {

                        if (users[found].NoOfTask >= 10)
                        {
                            printf("Task limit reached!\n");
                            continue;
                        }

                        printf("Enter Task: ");

                        fgets(users[found].tasks[users[found].NoOfTask], 100, stdin);
                        int NewLine = strcspn(users[found].tasks[users[found].NoOfTask], "\n");
                        users[found].tasks[users[found].NoOfTask][NewLine] = '\0';

                        users[found].NoOfTask++;

                        printf("Task added successfully!\n");
                    }
                    else if (choice == 3)
                    {
                        printf("Logged out successfully!\n");
                        break;
                    }
                    else
                    {
                        printf("Invalid option.\n");
                    }
                }
            }
            else
            {
                printf("NO USER FOUND\n");
            }
        }
        else if (whattodo == 3)
        {

            printf("Registered Users:\n");
            if (count == 0)
            {
                printf("None\n");
            }
            for (int i = 0; i < count; i++)
            {

                printf("- %s\n", users[i].name);
            }
        }
        else
        {
            printf("Invalid option.\n");
        }
    }

    return 0;
}

