#include "main.h"
#include <stdio.h>
#include <limits.h>

int main()
{
	int i;
	i = _printf("%d", INT_MAX);
	printf("\n");
	_printf("%d\n", i);;
	i = printf("%d", INT_MAX);
	printf("\n");
	printf("%d", i);
}
