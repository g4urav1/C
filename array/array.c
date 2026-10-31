
#include<stdio.h>
#include<string.h>

void main(){

// int matrix[2][3] = {
//     {45, 67, 89},
//     {12, 56, 90}
// };

// for(int i = 0; i < 2; i++) {
//     for(int j = 0; j < 3; j++) {
//         printf("%d\n", matrix[i][j]);
//     }
// }

// char name1[] = "Amit Kumar";
// char name2[] = {'A','M','I','T','\0'};
// printf("Name1: %s\n", name1);
// printf("Name2: %s\n", name2);

// printf("%d", strcmp("apple", "apple"));

char FirstName[20];
char LastName[20];
    
printf("Enter your Firstname: ");
fgets(FirstName, 20, stdin);
int firstNewLine = strcspn(FirstName, "\n");
FirstName[firstNewLine] = '\0';
    
printf("Enter your Lastname: ");
fgets(LastName, 20, stdin);

printf("Name: %s %s", FirstName, LastName);

// int matrix1[2][3] = {
//     {45, 67, 89},
//     {12, 56, 90}
// };
// int matrix2[2][3] = {
//     {45, 67, 89},
//     {12, 56, 90}
// };

// for(int i = 0; i < 2; i++) {
//     for(int j = 0; j < 3; j++) {
//         printf("%d\t", matrix1[i][j]*matrix2[i][j]);
//     }
//     printf("\n");
// }


}