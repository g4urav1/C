#include <stdio.h>
#include <string.h>

int getNextId(char filename[])
{
    FILE *fp;
    int id = 0, maxId = 0;

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        return 1;
    }

    while (fscanf(fp, "%d", &id) == 1)
    {
        if (id > maxId)
        {
            maxId = id;
        }
        int ch;
        while ((ch = fgetc(fp)) != '\n' && ch != EOF)
            ;
    }

    fclose(fp);
    if (maxId == 0)
    {
        return 100;
    }
    else
    {
        return maxId + 1;
    }
}

void addBook()
{
    FILE *fp;
    int id, quantity;
    char name[100], author[100];

    id = getNextId("books.txt");

    printf("Enter book name: ");
    scanf(" %[^\n]", name);

    printf("Enter author name: ");
    scanf(" %[^\n]", author);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    fp = fopen("books.txt", "a");

    if (fp == NULL)
    {
        printf("can't open file");
        return;
    }

    fprintf(fp, "%d|%s|%s|%d\n", id, name, author, quantity);

    fclose(fp);

    printf("\nBook added successfully!\n");
}

void viewBook()
{
    FILE *fpr = fopen("books.txt", "r");
    if (fpr != NULL)
    {
        char ch;
        while ((ch = fgetc(fpr)) != EOF)
        {
            printf("%c", ch);
        }
        fclose(fpr);
    }
    else
    {
        printf("Couldn't read file\n");
    }
}

void searchBook()
{
    {
        int id, quantity;
        char name[100], author[100];

        int findId;

        printf("Enter book Id: ");
        scanf(" %d", &findId);

        FILE *fpr = fopen("books.txt", "r");
        if (fpr != NULL)
        {
           
            while (fscanf(fpr, "%d|%99[^|]|%99[^|]|%d",
                          &id, name, author, &quantity) == 4)
            {
                if (findId == id)
                {
                    printf("Book Found!\n");
                    printf("%d|%s|%s|%d\n",
                           id, name, author, quantity);

                   
                    break;
                }
                else
                {
                    printf("unable to find book\n");
                }
            }
            fclose(fpr);
        }
        else
        {
            printf("Couldn't read file");
        }
    }
}

int main()
{
    struct Book
    {
        int id;
        char title[100];
        char author[100];
        int quantity;
    };
    struct Member
    {
        int id;
        char name[100];
        int phone;
    };
    struct Issued
    {
        int bookId;
        int memberId;
        int issueDate;
        int returnDate;
        int returned;
    };

    int op;
    while (1)
    {
        printf("1.Books\n");
        printf("2.Members\n");
        printf("3.Issued\n");
        printf("which field do you want to access:");
        scanf("%d", &op);
        if (op == 1)
        {
            int op;
            while (1)
            {
                printf("1.Add Books\n");
                printf("2.View Books\n");
                printf("3.Search Books\n");
                printf("4.Update Book\n");
                printf("5.Delete Book\n");
                printf("which do you want:");
                scanf("%d", &op);
                if (op == 1)
                {
                    addBook();
                }
                else if (op == 2)
                {
                    printf("\n=====================================\n");
                    viewBook();
                    printf("\n=====================================\n");
                }
                else if (op == 3)
                {
                    printf("\n=====================================\n");
                    searchBook();
                    printf("\n=====================================\n");
                }
                else if (op == 4)
                {
                    printf("=========UPDATE============\n");
                }
                else if (op == 5)
                {
                    printf("=========DELETE============\n");
                }
                else
                {
                    printf("=========INVALID CHOICE============\n");
                    break;
                }
            }
        }
        else if (op == 2)
        {
            printf("=========MEMBERS============\n");
        }
        else if (op == 3)
        {
            printf("=========ISSUE============\n");
        }
        else
        {
            printf("=========INVALID CHOICE============\n");
            break;
        }
    }

    return 0;
}