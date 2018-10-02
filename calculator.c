#include <stdio.h>

int GetFirstOperand(){
  double firstOperand;
  printf("First Operand: ");
  scanf("%lf\n", &firstOperand );
  return firstOperand;
}

int GetSecondOperand(){
  double secondOperand;
  printf("Second Operand: ");
  scanf("%lf\n", &secondOperand);
  return secondOperand;
}
void AddOperands(){
  double firstOperand = GetFirstOperand();
  double secondOperand = GetSecondOperand();
  double result;
  result = firstOperand+secondOperand;
  printf("Result: %lf\n", result);
}

void SubOperands(){
  double firstOperand = GetFirstOperand();
  double secondOperand = GetSecondOperand();
  double result;
  result = firstOperand-secondOperand;
  printf("Result: %lf\n", result);
}

void MultiplyOperands(){
  double firstOperand = GetFirstOperand();
  double secondOperand = GetSecondOperand();
  double result;
  result = firstOperand*secondOperand;
  printf("Result: %lf\n", result);
}

void DivideOperands(){
  double firstOperand = GetFirstOperand();
  double secondOperand = GetSecondOperand();
  double result;
  result = firstOperand/secondOperand;
  printf("Result: %lf\n", result);
}

int main(int argc, char const *argv[])
{
  printf("Choose one of the following operations: \n");
  printf("Add(1)\n");
  printf("Subtract(2)\n");
  printf("Multiplay(3)\n");
  printf("Divide(4)\n");
  printf("Stop programm(-1)\n");

  int type_of_operation;
  printf("Enter your choice: ");
  scanf("%d\n", &type_of_operation);

  switch (type_of_operation) {
    case -1:
      printf("Programm closes by users desission\n");
      return 1;
    case 1:
      AddOperands();
    case 2:
      SubOperands();
    case 3:
      MultiplyOperands();
    case 4:
      DivideOperands();
  }
}
