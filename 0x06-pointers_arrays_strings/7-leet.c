#include "main.h"
/** leet - encode leet.
  * @str: string to be encoded.
  * Return: end of the program.
  */
char *leet(char *str)
{
	int i;
	int len;
	char decod[] = "aAeEoOtTlL";
	char cod[] = "4433007711";

	len = 0;
	while(str[len] != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (str[len] == decod[i])
			{
				str[len] = cod[i];
			}
		}
		len += 1;
	}
	return (str);
}
