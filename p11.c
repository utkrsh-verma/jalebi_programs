#include <stdio.h>

int main() 
{
  double operand1, operand2, result;
  char operator;

  printf("Enter first operand: ");
  scanf("%lf", &operand1);

  printf("Enter operator (+, -, *, /): ");
  scanf(" %c", &operator);

  printf("Enter second operand: ");
  scanf("%lf", &operand2);

  switch (operator) {
    case '+':
      result = operand1 + operand2;
      printf("Result: %.2lf\n", result);
      break;
    case '-':
      result = operand1 - operand2;
      printf("Result: %.2lf\n", result);
      break;
    case '*':
      result = operand1 * operand2;
      printf("Result: %.2lf\n", result);
      break;
    case '/':
      if (operand2 != 0) {
        result = operand1 / operand2;
        printf("Result: %.2lf\n", result);
      } else {
        printf("Error: Division by zero!\n");
      }
      break;
    default:
      printf("Invalid operator!\n");
  }

  return 0;
}