#include "shapes.h"

bool line_load(FILE* f, struct line* pln)
{
	if (f == NULL)
		return false;

	if (fread(&pln->x1, sizeof(int16_t), 1, f) != 1 || fread(&pln->y1, sizeof(int16_t), 1, f) != 1 ||
		fread(&pln->x2, sizeof(int16_t), 1, f) != 1 || fread(&pln->y2, sizeof(int16_t), 1, f) != 1 ||
		fread(&pln->thickness, sizeof(uint8_t), 1, f) != 1)
		return false;

	return true;
}