#include "stringhe.h"

size_t whiteSpacesFill(char* str, size_t n, size_t strLength)
{
	size_t i;
	for (i = 0; i < n - strLength; i++)
		str[i] = ' ';

	return i;
}

void mergeOld(char* newString, const char* oldString, size_t startPoint)
{
	for (size_t i = 0; i < strlen(oldString); i++)
	{
		newString[startPoint] = oldString[i];
		startPoint++;
	}
}

char* spacefill(const char* str, size_t n)
{
	if (str == NULL)
		return NULL;

	size_t chars = strlen(str);

	char* finalString;

	if (n <= chars)
	{
		finalString = calloc(strlen(str), sizeof(char));

		for (size_t i = 0; i < strlen(str); i++)
			finalString[i] = str[i];
	}
	else
	{
		finalString = calloc(n + 1, sizeof(char));

		size_t startPoint = whiteSpacesFill(finalString, n, strlen(str));

		mergeOld(finalString, str, startPoint);
	}

	return finalString;

}