#include "holberton.h"
#include <stdio.h>
/**
  * main- prints certain words if numbers are multiples of 3 & or 5
  *
  *
  * Return: 0
  */
int main(void)
{
int num;

for (num = 1; num < 101; num++)
{
	if (num % 3 == 0 && num % 5 != 0)
		printf("Fizz ");
	else if (num % 5 == 0 && num % 3 != 0)
		printf("Buzz ");
	else if (num % 3 == 0 && num % 5 == 0)
		printf("Fizz Buzz ");
	else
		printf("%d ", num);
}
printf("\n");
return (0);
}
