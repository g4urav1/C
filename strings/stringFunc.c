#include <stdio.h>
#include <string.h>

char *toUpper(char ch[])
{
    int i = 0;

    while (ch[i] != '\0') 
    {
        if (ch[i] >=97 && ch[i] <= 122)
        {
            ch[i] = ch[i] - 32;
        }
        i++;
    }
    return ch;
}

char *toLower(char ch[])
{
    int i = 0;

    while (ch[i] != '\0') 
    {
        if (ch[i] <= 90 && ch[i] >= 65)
        {
            ch[i] = ch[i] + 32;
        }
        i++;
    }
    return ch;
}

char *toSwipe(char ch[])
{
    int i = 0;

    while (ch[i] != '\0') 
    {
        if (ch[i] >= 97 && ch[i] <= 122)
        {
            ch[i] = ch[i] - 32;
        }
        else if (ch[i] <= 90 && ch[i] >= 65)
        {
            ch[i] = ch[i] + 32;
        }
        i++;
    }
    return ch;
}

void *toASCII(char ch[])
{
    int i = 0;

    while (ch[i] != '\0')
    {
        printf("%d ", ch[i]);
        i++;
    }
}

int main()
{
    char character[500];

    printf("Enter a string : ");
    if (fgets(character, sizeof(character), stdin) != NULL)
    {
        character[strcspn(character, "\n")] = '\0';
    }

    printf("Your swiped string is : %s\n", toSwipe(character));
    printf("Your Upper case string is : %s\n", toUpper(character));
    printf("Your lower case string is : %s\n", toLower(character));
    printf("Your ascii string is :");
    toASCII(character);

    return 0;
}