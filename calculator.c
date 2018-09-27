#include <stdio.h>

int main(int argc, char const *argv[]) {
  printf("choose one of the following"\n );
  printf("Add(1)\n" );
  printf("Subtract (2)\n" );
  printf("Multiply (3)\n" );
  printf("Divide (4)\n" );
  printf("stop Program (-1))\n" );
  printf("Enter your choice\n" );
  int operation;
  scanf("%d\n", &operation);

  if (operation == -1) {
    printf("Programm quit by user request\n", );
  }
  else if (operation == 1) {
    Get_first_number();
    Get_second_number();
    double result = first_operand+second_operand;
    printf("The result is%lf\n",&result );
  }
  else if (operation == 2) {
    Get_first_number();
    Get_second_number();
    double result = first_operand-second_operand;
    printf("The result is%lf\n",&result );
  }
  else if (operation == 3) {
    Get_first_number();
    Get_second_number();
    double result = first_operand*second_operand;
    printf("The result is%lf\n",&result );
  }
  else if (operation == 4) {
    Get_first_number();
    Get_second_number();
    if (second_operand == 0) {
      printf("Division by zero\n", );
    }
    else{
    double result = first_operand/second_operand;
    printf("The result is%lf\n",&result );
    }
  }
  else{
    printf("wrong operation number.\n", );
  }
  return 0;
}

double Get_first_number(){
  double first_operand;
  printf("Please enter your first operand\n" );
  scanf("%lf\n",&first_operand );
  return first_operand;
}
double Get_second_number(){
  double second_operand;
printf("Please enter your second operand\n" );
  scanf("%lf\n",&second_operand );
  return second_operand;
}
