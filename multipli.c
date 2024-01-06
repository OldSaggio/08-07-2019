#include <stdlib.h>
#include <stdbool.h>

int* rimuovi_multipli(const int* v, size_t size, size_t* newsize)
{
	if (v == NULL || size == 0)
	{
		*newsize = 0;
		return NULL;
	}

	int* newVector = malloc(sizeof(int));
	int count = 0;
	bool isMultiplo;

	for (size_t i = 0; i < size; i++)
	{
		isMultiplo = false;
		for (size_t j = 0; j < size; j++)
			if (v[i] % v[j] == 0 && i!=j)
			{
				isMultiplo = true;
				break;
			}

		if (isMultiplo == false)
		{
			count++;
			newVector = realloc(newVector, count * sizeof(int));
			newVector[count-1] = v[i];
		}

	}
		

	*newsize = count;

	return newVector;
}