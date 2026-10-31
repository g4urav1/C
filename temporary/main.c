#include <stdio.h>

int main()
{
    // int a = 2;
    // int b = 3;
    // printf("%d\n%d", a , b );

    // int a=10;
    // int b=20;
    // int c;
    //  c = a;
    //  a = b;
    //  b = c;
    // printf("%d\n%d", a , b );

    // int l;
    // int b;
    // printf("Enter the length: ");
    // scanf("%d", &l);
    // printf("Enter the breadth: ");
    // scanf("%d", &b);
    // printf("AREA OF RECTANGLE IS: %d", l * b );

    // float c, f;
    // printf("ENTER TEMPERATURE IN CELCIUS: ");
    // scanf("%f", &c);
    // f = (c * 9.0 / 5.0) + 32;
    // printf("%.2f", f);

    // int n;
    // printf("ENTER THE NUMBER: ");
    // scanf("%d", &n);
    // printf("SQUARE IS: %d \n", n*n);
    // printf("CUBE IS: %d", n*n*n);

    // int n;
    // printf("ENTER THE NUMBER: ");
    // scanf("%d", &n);
    // if(n<0){
    //     printf("NUMBER IS NEGATIVE");
    // }else if(n>0){
    //     printf("NUMBER IS POSITIVE");
    // }
    // else{
    //     printf("NUMBER IS ZERO");
    // }

    // int n;
    // printf("ENTER THE NUMBER: ");
    // scanf("%d", &n);
    // if(n%2 == 0){
    //     printf("NUMBER IS EVEN");
    // }
    // else{
    //     printf("NUMBER IS ODD");
    // }

    // int age;
    // printf("ENTER YOUR AGE: ");
    // scanf("%d", &age);
    // if(age >= 18){
    //     printf("APKA VOTE GYANU CHURA LIA");
    // }
    // else{
    //     printf("YOU CAN'T VOTE");
    // }

    // int a,b,c, max;
    // printf("ENTER 1st NUMBER: ");
    // scanf("%d", &a);
    // printf("ENTER 2nd NUMBER: ");
    // scanf("%d", &b);
    // printf("ENTER 3rd NUMBER: ");
    // scanf("%d", &c);
    // if(a>b && a>c){
    //     max = a;
    // }
    // else if (b>a && b>c ){
    //   max = b;
    // }
    // else{
    //   max = c;
    // }
    // printf("LAGREST NUMBER IS: %d " , max);

    // int marks;
    // char grade;

    // printf("ENTER YOUR MARKS: ");
    // scanf("%d", &marks);

    // if (marks <= 100 && marks >= 90) {
    //     grade = 'A';
    // }
    // else if (marks >= 75 && marks < 90) {
    //     grade = 'B';
    // }
    // else if (marks >= 60 && marks < 75) {
    //     grade = 'C';
    // }
    // else if (marks >= 40 && marks < 60) {
    //     grade = 'D';
    // }
    // else if (marks >= 0 && marks < 40) {
    //     grade = 'F';
    // }
    // else {
    //     printf("Invalid marks");
    // }
    // printf("Grade: %c", grade);

    // int year;
    // printf("ENTER YEAR: ");
    // scanf("%d", &year);

    // if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
    //      printf("%d Leap year", year);
    //  }
    // else{
    //     printf("%d Not a leap Year", year);
    // }

    // float a, b;
    // char operator;

    // printf("Enter first number: ");
    // scanf("%f", &a);

    // printf("Enter operator (+, -, *, /): ");
    // scanf(" %c", &operator);

    // printf("Enter second number: ");
    // scanf("%f", &b);

    // if (operator == '+') {
    //     printf("Result = %.2f", a + b);
    // }
    // else if (operator == '-') {
    //     printf("Result = %.2f", a - b);
    // }
    // else if (operator == '*') {
    //     printf("Result = %.2f", a * b);
    // }
    // else if (operator == '/') {
    //     if (b != 0) {
    //         printf("Result = %.2f", a / b);
    //     }
    //     else {
    //         printf("Error: Division by zero!");
    //     }
    // }
    // else {
    //     printf("Invalid operator!");
    // }

    // for(int i = 1; i <= 10; i++){
    //     printf("%d \n", i);
    // }

    // for(int i = 10; i >= 1; i--){
    //     printf("%d \n", i);
    // }

    // int i , t;

    //  printf("ENTER THE NUMBER TO PRINT TABLE: ");
    //      scanf("%d", &i);
    //  for(t = 1 ; t <= 10; t++){
    //     printf("%d X %d = %d \n" ,i , t, i*t);
    //  }

    // int i, n, sum;
    // sum= 0;
    //    printf("ENTER THE N: ");
    //     scanf("%d", &n);
    // for(i = 1 ; i<= n; i++){
    //     sum = sum+i;
    // }
    // printf("SUM FROM 1 to %d is:  %d" , n , sum);

    // int i, n, factorial;
    // factorial= 1;
    //    printf("ENTER THE NUMBER: ");
    //     scanf("%d", &n);
    // for(i = 1 ; i<= n; i++){
    //     factorial = factorial*i;
    // }
    // printf("factorial of %d is:  %d" , n , factorial);

    // int number, count = 0;
    // printf("Enter a number: ");
    // scanf("%d", &number);
    // if (number == 0) {
    //     count = 1;
    // }
    // else {
    //     while (number != 0) {
    //         number = number / 10;
    //         count++;
    //     }
    // }
    // printf("Total digits = %d", count);

    // int number, digit, sum = 0;
    // printf("Enter a number: ");
    // scanf("%d", &number);

    // while (number != 0)
    // {
    //     digit = number % 10;
    //     sum = sum + digit;
    //     number = number / 10;
    // }
    // printf("Total digits = %d", sum);

    // int number, digit, reverse = 0;
    // printf("Enter a number: ");
    // scanf("%d", &number);

    // while (number != 0)
    // {
    //     digit = number % 10;
    //     reverse = reverse * 10 + digit;
    //     number = number / 10;
    // }
    // printf("Reversed Number  = %d", reverse);

    
    // int number, digit, given, reverse = 0;
    // printf("Enter a number: ");
    // scanf("%d", &number);

    // given = number;

    // while (number != 0)
    // {
    //     digit = number % 10;
    //     reverse = reverse * 10 + digit;
    //     number = number / 10;
    // }
    // if (given == reverse)
    // {
    //     printf("%d is a palindrome \n", given);
    // }
    // else
    // {
    //     printf("%d not a palindrome", given);
    // }
}
