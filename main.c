#include <stdio.h>
#include <math.h>

/*global variable verification*/
char operator;
double first, second;


int main() 
{
  

printf("Please enter an operator (+,-,*,)\n");
scanf("%c",&operator);

printf("Please enter two numbers\n");
scanf("%lf %lf",&first, &second);

switch (operator) {
  case '+':
  printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
  break;

  case'-':
  printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
  break;

  case'*':
  printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
  break;

  case'/':
  printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
  break;
  
  /*In the event the operator deos not match the case*/
  default:
  printf("Error. Operator is incorrect\n");
}

return 0;

}
