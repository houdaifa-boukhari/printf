#include <stdio.h>
#include "main.h"
int main() {
	int i;
	int array[5] = {1, 2, 3, 4, 5};
	i = printf("Address of array: %p\n", (void*)array + 1);
	_printf ("%d\n", i);
	i = printf("Address of array: %p\n", (void*)array + 1);
	printf("%d", i);
    return 0;
}
