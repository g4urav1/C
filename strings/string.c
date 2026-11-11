
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
    // int duplicate;

    // while (str[i] != '\0')
    // {
    //     duplicate = 0;

    //     for (int k = 0; k < j; k++)
    //     {
    //         if (str[i] == result[k])
    //         {
    //             duplicate = 1;
    //             break;
    //         }
    //     }

    //     if (duplicate == 0)
    //     {
    //         result[j] = str[i];
    //         j++;
    //     }

    //     i++;
    // }

    // result[j] = '\0';

    // printf("String after removing duplicates: %s", result);

    //================QUESTION 12 ====================

    // char str[100], longest[100], word[100];

    // printf("Enter sentence: ");
    // fgets(str, sizeof(str), stdin);
    // str[strcspn(str, "\n")] = '\0';

    // int i = 0, j = 0, max = 0;

    // longest[0] = '\0';

    // while (1)
    // {
    //     if (str[i] != ' ' && str[i] != '\0')
    //     {
    //         word[j] = str[i];
    //         j++;
    //     }
    //     else
    //     {
    //         word[j] = '\0';

    //         if (j > max)
    //         {
    //             max = j;

    //             for (int k = 0; k <= j; k++)
    //             {
    //                 longest[k] = word[k];
    //             }
    //         }

    //         j = 0;
    //     }

    //     if (str[i] == '\0')
    //     {
    //         break;
    //     }

    //     i++;
    // }

    // printf("Longest word: %s", longest);

    //================QUESTION 13 ====================

    // char str1[50], str2[50];
    // int freq[256] = {0};

    // printf("Enter first string: ");
    // fgets(str1, sizeof(str1), stdin);
    // str1[strcspn(str1, "\n")] = '\0';

    // printf("Enter second string: ");
    // fgets(str2, sizeof(str2), stdin);
    // str2[strcspn(str2, "\n")] = '\0';

    // for (int i = 0; str1[i] != '\0'; i++)
    // {
    //     if (str1[i] >= 'A' && str1[i] <= 'Z')
    //     {
    //         str1[i] = str1[i] + 32;
    //     }

    //     if (str1[i] != ' ')
    //     {
    //         freq[(unsigned char)str1[i]]++;
    //     }
    // }

    // for (int i = 0; str2[i] != '\0'; i++)
    // {
    //     if (str2[i] >= 'A' && str2[i] <= 'Z')
    //     {
    //         str2[i] = str2[i] + 32;
    //     }

    //     if (str2[i] != ' ')
    //     {
    //         freq[(unsigned char)str2[i]]--;
    //     }
    // }

    // int isAnagram = 1;

    // for (int i = 0; i < 256; i++)
    // {
    //     if (freq[i] != 0)
    //     {
    //         isAnagram = 0;
    //         break;
    //     }
    // }

    // if (isAnagram)
    // {
    //     printf("Strings are anagrams.");
    // }
    // else
    // {
    //     printf("Strings are not anagrams.");
    // }

    //================QUESTION 14 ====================

    // char str[100], sub[50];

    // printf("Enter main string: ");
    // fgets(str, sizeof(str), stdin);
    // str[strcspn(str, "\n")] = '\0';

    // printf("Enter substring: ");
    // fgets(sub, sizeof(sub), stdin);
    // sub[strcspn(sub, "\n")] = '\0';

    // int i, j;
    // int found = 0;

    // if (sub[0] == '\0')
    // {
    //     found = 1;
    // }

    // for (i = 0; str[i] != '\0' && found == 0; i++)
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

    // char str[500], words[250][50], word[50];
    // int count[250] = {0};

    // printf("Enter sentence: ");
    // fgets(str, sizeof(str), stdin);
    // str[strcspn(str, "\n")] = '\0';

    // int i = 0, j = 0, total = 0;
    // int found;

    // while (1)
    // {
    //     if (str[i] != ' ' && str[i] != '\0')
    //     {
    //         word[j] = str[i];
    //         j++;
    //     }
    //     else
    //     {
    //         if (j > 0)
    //         {
    //             word[j] = '\0';
    //             found = 0;

    //             for (int k = 0; k < total; k++)
    //             {
    //                 int l = 0;

    //                 while (word[l] != '\0' &&
    //                        words[k][l] != '\0' &&
    //                        word[l] == words[k][l])
    //                 {
    //                     l++;
    //                 }

    //                 if (word[l] == '\0' && words[k][l] == '\0')
    //                 {
    //                     count[k]++;
    //                     found = 1;
    //                     break;
    //                 }
    //             }

    //             if (found == 0)
    //             {
    //                 int k = 0;

    //                 while (word[k] != '\0')
    //                 {
    //                     words[total][k] = word[k];
    //                     k++;
    //                 }

    //                 words[total][k] = '\0';
    //                 count[total] = 1;
    //                 total++;
    //             }

    //             j = 0;
    //         }
    //     }

    //     if (str[i] == '\0')
    //     {
    //         break;
    //     }

    //     i++;
    // }

    // printf("\nWord Frequency:\n");

    // for (int k = 0; k < total; k++)
    // {
    //     printf("%s : %d\n", words[k], count[k]);
    // }

    return 0;
}