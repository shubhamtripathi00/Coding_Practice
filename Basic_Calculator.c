#include <stdio.h>
#include <math.h>


int main(int argc, char const *argv[])
{
  printf("Welcome to Calculator\n");

  char op;
  double first, second;

  printf("Enter an operator from the following : + , - , * , / : \n");
  scanf("%c",&op);

  printf("Enter two operands : \n");
  scanf("%lf %lf",&first,&second);

  switch (op) {

    case '+' :

    printf("%0.1lf + %0.1lf = %0.1lf\n",first,second,first + second);
    break;

    case '-' :

    printf("%0.1lf - %0.1lf = %0.1lf\n",first,second,first - second);
    break;

    case '*' :

    printf("%0.1lf * %0.1lf = %0.1lf\n",first,second,first * second);
    break;

    case '/' :

    printf("%0.1lf / %0.1lf = %0.1lf\n",first,second,first / second);
    break;


  }

  return 0;
}
