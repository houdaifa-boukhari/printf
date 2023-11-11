#include "main.h"
#include <stdio.h>
#include <limits.h>

int main()
{
	void *a = NULL;
	int i;
	i = _printf("%p", &a);
	_printf("\n%d\n", i);
	i = printf("%p", &a);
	printf("\n%d", i);
}
