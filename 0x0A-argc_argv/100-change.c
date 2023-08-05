#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * main - prints the minimum number of coins for a change.
  * @argc: number of arguments.
  * @argv: amount to be made of cents.
  * Return: end of the program.
  */
int main(int argc, char *argv[])
{
	int i;
	int amount;
	int number;
	int coins[] = {25, 10, 5, 2, 1};

	number = 0;
	amount = atoi(argv[1]);
	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && amount >= 0; i++)
	{
		while (amount >= coins[i])
		{
			number += 1;
			amount -= coins[i];
		}
	}
	printf("%d\n", number);
	return (0);
}
