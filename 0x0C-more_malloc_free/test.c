#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	char *hell;
	int i;

	hell = argv[1];
	for (i = 0; hell[i] != '\0'; i++)
	{
		if (hell[i] < '0' || hell[i] > '9')
			printf("Mistake\n");
		else
			printf("number\n");
	}
	return (0);
}
