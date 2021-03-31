#include <stdio.h>

int main()
{
  int num1, num2, res;
  char operator; //operator은 연산자라는 의미(+, -, *, /)
  
  printf("입력 : ");
  scanf("%d %c %d", &num1, &operator, &num2);
  
  if (operator == '+')
  {
    res = num1 + num2;
  }
  else if (operator == '-')
  {
    res = num1 - num2;
  }
  else if (operator == '*')
  {
    res = num1 * num2;
  }
  else if (operator == '/')
  {
    res = num1 / num2;
  }
  printf("%d", res);
  return 0;
}
