#include <stdio.h>

int main()
{
	int number1, number2;
	number1 = 1;
	printf("%d\n", number1);

	number2 = number1;
	printf("%d\n", number2);

	number1 + 1;
	printf("%d\n", number1);

	number1 = number1 + 1;
	printf("%d\n", number1);

	number2 += 1;
	printf("%d\n", number2);

	number1++;
	printf("%d\n", number1);

	++number1;
	printf("%d\n", number1);

	printf("%d\n", ++number1);
	printf("%d\n", number1++);
	printf("%d\n", number1);

	// n = n + 1, n += 1, n++, ++n

	return 0;
}