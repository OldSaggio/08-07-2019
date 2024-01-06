#if !defined SHAPES_H
#define SHAPES_H

#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

struct line {
    int16_t x1, y1;
    int16_t x2, y2;
    uint8_t thickness;
};

extern bool line_load(FILE* f, struct line* pln);

#endif /*SHAPES_H*/