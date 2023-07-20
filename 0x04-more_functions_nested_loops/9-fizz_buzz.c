#include <stdio.h>
/**
  * main - fizz buzz
  *
  * Return: end of the program
  */

int main(void)
{
	int i;
	char fi[] = "Fizz";
	char nu[] = "Buzz";
	char finu[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) != 0))
			printf("%s ", fi);
		else if (((i % 5) == 0) && ((i % 3) != 0))
			printf("%s ", nu);
		else if (((i % 3) == 0) && ((i % 5) == 0))
			printf("%s ", finu);
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
