

#include <stdio.h>

void main()
{
  // to check if number is palindrone or not

  int num, sum;
  sum = 0;
  printf("ENTER THE NUMBER YOU WANT TO CHECK\n");
  scanf("%d", &num);
  int num1 = num;
  int num2 = num;

  int digit;
  digit = 0;

  while (num1 > 0)
  {
    num1 = num1 / 10;
    digit++;
  }

  int r;
  for (int i = 1; i <= digit; i++)
  {
    r = num2 % 10;
    sum = sum * 10 + r;
    num2 = num2 / 10;
  }

  if (num == sum)
    printf("GIVEN NUMBER IS PALINDROME\n");

  else
    printf("GIVEN NUMBER IS NOT PALINDROME\n");
}
