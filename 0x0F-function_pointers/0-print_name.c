#include "function_pointers.h"
/**
  * print_name - print using function pointers.
  * @name: string to be printed.
  * @f: address of function which prints name.
  */
void print_name(char *name, void(*f)(char *))
{
	f(name);
}
