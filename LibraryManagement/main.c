#include <stdio.h>
#include <time.h>

//=========================ID===========================
int getNextId(char filename[])
{
    FILE *fp;
    int id, maxId = 100;

    fp = fopen(filename, "r");

    if (fp != NULL)
    {
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
    }
    else
    {
        return 1;
    }

    return maxId + 1;
}

//=============================BOOKS============================================
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

    if (fp != NULL)
    {
        fprintf(fp, "%d|%s|%s|%d\n", id, name, author, quantity);
        fclose(fp);
        printf("\nBook added successfully!\n");
    }
    else
    {
        printf("can't open file");
        return;
    }
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
    int id, quantity;
    char name[100], author[100];

    int findId;
    int found = 0;

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
                printf("%d|%s|%s|%d",
                       id, name, author, quantity);
                found = 1;
                break;
            }
        }
        if (!found)
        {
            printf("Unable to find Book.");
        }
        fclose(fpr);
    }
    else
    {
        printf("Couldn't read file");
    }
}

void updateBook()
{
    int id, quantity;
    char name[100], author[100];

    int findId;
    int found = 0;

    printf("Enter book Id: ");
    scanf(" %d", &findId);

    FILE *fpr = fopen("books.txt", "r");
    FILE *fpw = fopen("temp.txt", "w");

    if (fpr != NULL && fpw != NULL)
    {
        while (fscanf(fpr, "%d|%99[^|]|%99[^|]|%d",
                      &id, name, author, &quantity) == 4)
        {
            if (findId == id)
            {
                printf("Enter new book name: ");
                scanf(" %[^\n]", name);
                printf("Enter new author name: ");
                scanf(" %[^\n]", author);

                printf("Enter new quantity: ");
                scanf(" %d", &quantity);

                fprintf(fpw, "%d|%s|%s|%d\n", id, name, author, quantity);
                found = 1;
            }
            else
            {
                fprintf(fpw, "%d|%s|%s|%d\n", id, name, author, quantity);
            }
        }

        fclose(fpr);
        fclose(fpw);

        remove("books.txt");
        rename("temp.txt", "books.txt");

        if (found)
        {
            printf("Book updated successfully!\n");
        }
        else
        {
            printf("Unable to find book\n");
        }
    }
    else
    {
        if (fpr == NULL)
        {
            printf("Couldn't read file\n");
        }
        if (fpw == NULL)
        {
            printf("Couldn't write file\n");
        }
        if (fpr != NULL)
        {
            fclose(fpr);
        }
        if (fpw != NULL)
        {
            fclose(fpw);
        }
    }
}

void deleteBook()
{
    int id, quantity;
    char name[100], author[100];

    int findId;
    int found = 0;

    printf("Enter book Id: ");
    scanf(" %d", &findId);

    FILE *fpr = fopen("books.txt", "r");
    FILE *fpw = fopen("temp.txt", "w");

    if (fpr != NULL && fpw != NULL)
    {
        while (fscanf(fpr, "%d|%99[^|]|%99[^|]|%d",
                      &id, name, author, &quantity) == 4)
        {
            if (findId == id)
            {
                found = 1;
                continue;
            }
            else
            {
                if (findId < id)
                {
                    fprintf(fpw, "%d|%s|%s|%d\n", id - 1, name, author, quantity);
                }
                else
                {
                    fprintf(fpw, "%d|%s|%s|%d\n", id, name, author, quantity);
                }
            }
        }

        fclose(fpr);
        fclose(fpw);

        remove("books.txt");
        rename("temp.txt", "books.txt");

        if (found)
        {
            printf("Book updated successfully!\n");
        }
        else
        {
            printf("Unable to find book\n");
        }
    }
    else
    {
        if (fpr == NULL)
        {
            printf("Couldn't read file\n");
        }
        if (fpw == NULL)
        {
            printf("Couldn't write file\n");
        }
        if (fpr != NULL)
        {
            fclose(fpr);
        }
        if (fpw != NULL)
        {
            fclose(fpw);
        }
    }
}

//====================================BOOKS============================================

//===================================MEMBERS============================================
void addMember()
{
    FILE *fp;
    int id;
    char name[100], phone[15];

    id = getNextId("members.txt");

    printf("Enter name: ");
    scanf(" %[^\n]", name);

    printf("Enter Phone Number: ");
    scanf("%s", &phone);

    fp = fopen("members.txt", "a");

    if (fp != NULL)
    {
        fprintf(fp, "%d|%s|%s\n", id, name, phone);
        fclose(fp);
        printf("\nMember added successfully!\n");
    }
    else
    {
        printf("can't open file");
        return;
    }
}

void viewMembers()
{
    FILE *fpr = fopen("members.txt", "r");
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

void searchMembers()
{
    int id;
    char name[100], phone[15];

    int found = 0;
    int findId;
    printf("Enter MemberId to find:");
    scanf("%d", &findId);

    FILE *fpr = fopen("members.txt", "r");

    if (fpr != NULL)
    {
        while (fscanf(fpr, "%d|%[^|]|%[^\n]", &id, name, phone) == 3)
        {
            if (findId == id)
            {
                printf("member found\n");
                printf("%d|%s|%s", id, name, phone);
                found = 1;
                break;
            }
        }
        if (!found)
        {
            printf("Unable to find Member.");
        }
        fclose(fpr);
    }
    else
    {
        printf("couldn't open file");
    }
}

//=======================================MEMBERS============================================

//=======================================ISSUE============================================
void issueBook()
{
    int memberId, bookId;
    int id, quantity;
    char name[100], author[100];

    time_t now = time(NULL);
    struct tm *local = localtime(&now);
    char issueDate[11], returnDate[11];
    strftime(issueDate, sizeof(issueDate), "%d-%m-%Y", local);

    printf("Enter MemberId to Issue book: ");
    scanf("%d", memberId);

    printf("Enter BookId to issue: ");
    scanf("%d", bookId);

    FILE *fprbook = fopen("books.txt", "r");
    FILE *fpwbook = fopen("temp.txt", "w");
    FILE *fpaissue = fopen("temp.txt", "a");
    if (fprbook != NULL && fpwbook != NULL && fpaissue != NULL)
    {
        while (fscanf(fprbook, "%d|%99[^|]|%99[^|]|%d",
                      &id, name, author, &quantity) == 4)
        {
            if (bookId == id)
            {
                if (quantity > 0)
                {
                }
            }
        }
    }
}

//=======================================ISSUE============================================

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
        char name[100], phone[15];
    };
    struct Issued
    {
        int bookId;
        int memberId;
        int issueDate;
        int returnDate;
    };

    int op;
    while (1)
    {
        printf("1.Books\n");
        printf("2.Members\n");
        printf("3.Issued\n");
        printf("4.EXIT PROGRAM\n");
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
                printf("6.GO BACK\n");
                printf("which do you want:");
                scanf("%d", &op);
                if (op == 1)
                {
                    printf("\n=====================================\n");
                    addBook();
                    printf("\n=====================================\n");
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
                    printf("\n=====================================\n");
                    updateBook();
                    printf("\n=====================================\n");
                }
                else if (op == 5)
                {
                    printf("\n=====================================\n");
                    deleteBook();
                    printf("\n=====================================\n");
                }
                else if (op == 6)
                {
                    printf("\n===============BACK=================\n");
                    break;
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
            printf("1.Add Members\n");
            printf("2.View Members\n");
            printf("3.Search Members\n");
            printf("4.GO BACK\n");
            printf("which do you want:");
            scanf("%d", &op);
            if (op == 1)
            {
                printf("\n=====================================\n");
                addMember();
                printf("\n=====================================\n");
            }
            else if (op == 2)
            {
                printf("\n=====================================\n");
                viewMembers();
                printf("\n=====================================\n");
            }
            else if (op == 3)
            {
                printf("\n=====================================\n");
                searchMembers();
                printf("\n=====================================\n");
            }
            else if (op == 4)
            {
                printf("\n===============BACK=================\n");
                break;
            }
            else
            {
                printf("=========INVALID CHOICE============\n");
                break;
            }
        }
        else if (op == 3)
        {
            printf("1.Issue Book\n");
            printf("2.Return Book\n");
            printf("3.Show Issued Books\n");
            printf("4.GO BACK\n");
            printf("which do you want:");
            scanf("%d", &op);
            if (op == 1)
            {
                printf("\n=====================================\n");
                issueBook();
                printf("\n=====================================\n");
            }
            else if (op == 2)
            {
                printf("\n=====================================\n");
                viewMembers();
                printf("\n=====================================\n");
            }
            else if (op == 3)
            {
                printf("\n=====================================\n");
                searchMembers();
                printf("\n=====================================\n");
            }
            else if (op == 4)
            {
                printf("\n===============BACK=================\n");
                break;
            }
            else
            {
                printf("=========INVALID CHOICE============\n");
                break;
            }
        }
        else if (op == 4)
        {
            printf("=========EXITED============\n");
            break;
        }
        else
        {
            printf("=========INVALID CHOICE============\n");
            break;
        }
    }

    return 0;
}