#include "c.h"

int	main(void)
{
	for (int i = 0; i < 3; i++)
		printf("main.c\n");
	printf("\n");
	func1();
	func2();
	func3();
	return (0);
}
