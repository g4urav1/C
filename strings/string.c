
#include <stdio.h>
#include <string.h>

int main()
{
    //================QUESTION 1 ===================

    // char ch[] = "HELLO";
    // int size = (sizeof(ch) / sizeof(ch[0])-1);
    // printf("%d", size);

    //================QUESTION 2 ===================

    // char ch[] = "HELLO BOI";
    // int size = (sizeof(ch) / sizeof(ch[0]));
    // char *start = &ch[0], *end = &ch[size - 1];
    // char temp;

    // while (start < end)
    // {
    //     temp = *start;
    //     *start = *end;
    //     *end = temp;
    //     start++;
    //     end--;
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     printf("%c", ch[i]);
    // }

    //================QUESTION 3 ===================

    // char ch[] = "check number of vowels and consonants";
    // int vow = 0, con = 0;

    // for (int i = 0; ch[i] != '\0'; i++)
    // {
    //     char letter = ch[i];

    //     if (ch[i] <= 90 && ch[i] >= 65)
    //     {
    //         letter = ch[i] = ch[i] + 32;
    //     }

    //     if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
    //     {
    //         vow++;
    //     }
    //     else if (letter == ' ')
    //     {
    //         continue;
    //     }
    //     else
    //     {
    //         con++;
    //     }
    // }

    // printf("vowels: %d\n", vow);
    // printf("consonants: %d", con);

    //================QUESTION 4 ===================

    // char ch[] = "count the no of words in this sentence";
    // int words = 0;

    // for (int i = 0; ch[i] != '\0'; i++)
    // {
    //     if (ch[i] != ' ' && (i == 0 || ch[i - 1] == ' '))
    //     {
    //         words++;
    //     }
    // }

    // printf("WORDS: %d\n", words);

    //================QUESTION 5 ===================

    // char str[50];
    // printf("Enter string: ");
    // fgets(str, sizeof(str), stdin);
    // str[strcspn(str, "\n")] = '\0';

    // char *start = str;
    // char *end = str;

    // while (*end != '\0')
    // {
    //     end++;
    // }

    // if (end > start)
    // {
    //     end--;
    // }

    // int isPalindrome = 1;

    // while (start < end)
    // {
    //     if (*start != *end)
    //     {
    //         isPalindrome = 0;
    //         break;
    //     }

    //     start++;
    //     end--;
    // }

    // if (isPalindrome)
    // {
    //     printf("The string is a palindrome.\n");
    // }
    // else
    // {
    //     printf("The string is not a palindrome.\n");
    // }

    //================QUESTION 6 ===================

    // char str1[50], str2[50];

    // printf("Enter string 1: ");
    // fgets(str1, sizeof(str1), stdin);
    // str1[strcspn(str1, "\n")] = '\0';

    // printf("Enter string 2: ");
    // fgets(str2, sizeof(str2), stdin);
    // str2[strcspn(str2, "\n")] = '\0';

    // int i = 0;
    // int result = 0;

    // while (str1[i] != '\0' && str2[i] != '\0')
    // {
    //     if (str1[i] > str2[i])
    //     {
    //         result = 1;
    //         break;
    //     }
    //     else if (str1[i] < str2[i])
    //     {
    //         result = -1;
    //         break;
    //     }

    //     i++;
    // }

    // if (result == 0)
    // {
    //     if (str1[i] != '\0')
    //     {
    //         result = 1;
    //     }
    //     else if (str2[i] != '\0')
    //     {
    //         result = -1;
    //     }
    // }

    // if (result == 1)
    // {
    //     printf("string 1 is greater\n");
    // }
    // else if (result == -1)
    // {
    //     printf("string 2 is greater\n");
    // }
    // else
    // {
    //     printf("strings are equal.\n");
    // }

    //================QUESTION 7 ====================

    // char str1[50], str2[50];
    // printf("Enter string: ");
    // fgets(str1, sizeof(str1), stdin);
    // str1[strcspn(str1, "\n")] = '\0';

    // int i = 0;

    // while (str1[i] != '\0')
    // {
    //     str2[i] = str1[i];
    //     i++;
    // }
    // str2[i] = '\0';

    // printf("entered string is: %s\n", str1);
    // printf("Copied string is: %s", str2);

    //================QUESTION 8 ====================

    // char str[50], ch;
    // printf("Enter string: ");
    // fgets(str, sizeof(str), stdin);
    // str[strcspn(str, "\n")] = '\0';
    // if (strlen(str) == sizeof(str) - 1)
    // {
    //     int c;
    //     while ((c = getchar()) != '\n' && c != EOF)
    //         ;
    // }
    // printf("Enter Character: ");
    // ch = getchar();
    // int occur = 0;
    // int i = 0;
    // while (str[i] != '\0')
    // {
    //     if (str[i] == ch)
    //     {
    //         occur++;
    //     }
    //     i++;
    // }
    // printf("occurance: %d", occur);

    //================QUESTION 9 ====================

    // char str[50];
    // printf("Enter string: ");
    // fgets(str, sizeof(str), stdin);
    // str[strcspn(str, "\n")] = '\0';
    // int i = 0, j = 0;
    // while (str[i] != '\0')
    // {
    //     if (str[i] != ' ')
    //     {
    //         str[j] = str[i];
    //         j++;
    //     }
    //     i++;
    // }
    // str[j] = '\0';
    // printf("string after removing spaces: %s", str);

    //================QUESTION 10 ====================

    // char str[50];
    // printf("Enter string: ");
    // fgets(str, sizeof(str), stdin);
    // str[strcspn(str, "\n")] = '\0';
    // int i = 0;
    // while (str[i] != '\0')
    // {
    //     if (str[i] >= 65 && str[i] <= 90)
    //     {
    //         str[i] = str[i] + 32;
    //     }
    //     else if (str[i] >= 97 && str[i] <= 122)
    //     {
    //         str[i] = str[i] - 32;
    //     }
    //     i++;
    // }
    // printf("String after toggle case: %s", str);

    //================QUESTION 11 ====================

    // char str[50], result[50];
    // printf("Enter string: ");
    // fgets(str, sizeof(str), stdin);
    // str[strcspn(str, "\n")] = '\0';
    // int i = 0, j = 0;
    // while (str[i] != '\0')
    // {
    //     for (i; i < strlen(str); i++)
    //     {
    //         if (str[i] != str[i + 1])
    //         {
    //             result[j] = str[i];
    //             j++;
    //         }
    //     }
    // }
    // result[j] = '\0';
    // printf("String after removing duplicates: %s", result);

    //================QUESTION 12 ====================

    // char str[100], word[50] = "", longest[50] = "";
    // printf("Enter string:");
    // fgets(str, sizeof(str), stdin);
    // str[strcspn(str, "\n")] = '\0';
    // int i = 0, j = 0;
    // while (str[i] != '\0')
    // {
    //     if (str[i] != ' ' && str[i] != '\0')
    //     {
    //         word[j] = str[i];
    //         j++;
    //     }
    //     else
    //     {
    //         word[j] = '\0';
    //         if (strlen(word) > strlen(longest))
    //         {
    //             strcpy(longest, word);
    //         }
    //         j = 0;
    //     }
    //     i++;
    // }
    // printf("Longest word in string is: %s", longest);

    //================QUESTION 13 ====================

    // char str[100], str2[100];
    // printf("Enter string: ");
    // fgets(str, sizeof(str), stdin);
    // str[strcspn(str, "\n")] = '\0';
    // printf("Enter string 2: ");
    // fgets(str2, sizeof(str2), stdin);
    // str2[strcspn(str2, "\n")] = '\0';
    // int i = 0, j = 0;
    // int anagram = 1;
    // if (strlen(str) != strlen(str2))
    // {
    //     anagram = 0;
    // }
    // else
    // {
    //     for (i = 0; str[i] != '\0'; i++)
    //     {
    //         int found = 0;
    //         for (j = 0; str2[j] != '\0'; j++)
    //         {
    //             if (str[i] == str2[j])
    //             {
    //                 str2[j] = '*';
    //                 found = 1;
    //                 break;
    //             }
    //         }
    //         if (found == 0)
    //         {
    //             anagram = 0;
    //             break;
    //         }
    //     }
    // }
    // if (anagram)
    // {
    //     printf("anagram.");
    // }
    // else
    // {
    //     printf("not anagram.");
    // }

    //================QUESTION 14 ====================

    // char str[100], sub[50];
    // printf("Enter main string: ");
    // fgets(str, sizeof(str), stdin);
    // str[strcspn(str, "\n")] = '\0';
    // printf("Enter substring: ");
    // fgets(sub, sizeof(sub), stdin);
    // sub[strcspn(sub, "\n")] = '\0';

    // int i = 0, j = 0;
    // int found = 0;

    // while (str[i] != '\0')
    // {
    //     j = 0;

    //     while (sub[j] != '\0' && str[i + j] == sub[j])
    //     {
    //         j++;
    //     }

    //     if (sub[j] == '\0')
    //     {
    //         found = 1;
    //         break;
    //     }

    //     i++;
    // }

    // if (found)
    // {
    //     printf("Substring found.");
    // }
    // else
    // {
    //     printf("Substring not found.");
    // }

    //================QUESTION 15 ====================

    char str[200], word[100][50];
    int counted[100] = {0};

    printf("Enter main string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int i = 0, j = 0, k = 0;

    while (str[i] != '\0')
    {
        while (str[i] == ' ')         
        {
            i++;
        }
        if (str[i] == '\0')
        {
            break;
        }

        j = 0;
        while (str[i] != ' ' && str[i] != '\0')
        {
            word[k][j] = str[i];
            i++;
            j++;
        }
        word[k][j] = '\0';
        k++;
    }

    for (int i = 0; i < k; i++)
    {
        printf("%s\n", word[i]);
    }

    return 0;
}
