#include "main.h"
/**
 * binary_to_uint - converts a binary to unsigned int.
 * @b: a pointer to 0's and 1's.
 * Return: Converted number.
 */
unsigned int binary_to_uint(const char *b)
{
        int dec = 0;
        int bin;
        int left = 0;
        int i;

        if (b == NULL)
                return (0);
        for (i = 0; b[i] != '\0'; i++)
                if (b[i] != '0' && b[i] != '1')
                        return (0);
        i -= 1;
        for (; i >= 0; i--)
        {
                bin = b[i] - '0';
                dec += bin << left;
                left += 1;
        }
        return (dec);
}
