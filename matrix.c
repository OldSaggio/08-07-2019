#include "matrix.h"

struct matrix* mat_permute_rows(const struct matrix* m, const size_t* p)
{
	struct matrix* ris = malloc(sizeof(struct matrix));

	ris->rows = m->rows;
	ris->cols = m->cols;

	double* data = malloc((m->rows * m->cols) * sizeof(double));

	for (size_t r = 0; r < ris->rows; r++)
		for (size_t c = 0; c < ris->cols; c++)
			data[r * ris->cols + c] = m->data[p[r] * m->cols + c];


	ris->data = data;
}