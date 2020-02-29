#include "rect.h"

int RectArea(const int width, const int height)
{
    if (width <= 0 || height <= 0)
        return 0;

    return width * height;
}

double TriangleArea(const int width, const int height)
{
    if (width <= 0 || height <= 0)
        return 0;
    return width * height / 2;
}