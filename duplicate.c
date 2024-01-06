#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

size_t contaCifre(unsigned int n)
{
	size_t count = 0;

	while (n != 0)
	{
		n /= 8;
		count++;
	}

	return count;
}

char* converti(unsigned int n)
{
	char* number = malloc(contaCifre(n) * sizeof(unsigned int));

	for (size_t i = 0; n != 0; i++)
	{
		number[i] = n % 8;
		n /= 8;
	}

	return number;
}

bool cifre_duplicate_oct(unsigned int n)
{
	const char* number = converti(n);

	for (size_t i = 0; i < strlen(number); i++)
		for (size_t j = i + 1; j < strlen(number); j++)
			if (number[i] == number[j])
			{
				free(number);
				return true;
			}

	free(number);

	return false;
}