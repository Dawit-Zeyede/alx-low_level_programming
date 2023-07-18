#include "main.h"
/**
  * print_alphabet - print lowercase letters
  *
  * Return: void
  */

void print_alphabet(void)
{

	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
        int i;
 
         for (i = 0; i < 26; i++)
                  putchar(alpha[i]);
         putchar('\n');
}
