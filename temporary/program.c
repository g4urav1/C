
#include<stdio.h>
#include<string.h>

void main(){
  char operation[10];
  int a, b;

  for(int i = 1 ; i>0;){

printf("\n Enter Operation: ");
  scanf("%s", &operation);
    
if (strcmp(operation, "exit") == 0) {
  
    printf("EXITED LOOP" );
   break;
}
printf("Enter First Number: ");
  scanf("%d", &a);
printf("Enter Second Number: ");
  scanf("%d", &b);
  
if (strcmp(operation, "add") == 0) {
    printf("Result: %d \n", a+b );
}
else if (strcmp(operation, "subtract") == 0) {
    printf("Result: %d \n", a-b );
}
else if (strcmp(operation, "multiply") == 0) {
    printf("Result: %d \n", a*b );
}
else if (strcmp(operation, "divide") == 0) {
    printf("Result: %d \n", a/b );
}
else {
    printf("Invalid Operator \n");
}
  }
  
}