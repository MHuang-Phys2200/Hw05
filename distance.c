#include <math.h>

#include "geom.h"

double distance(struct point2d a, struct point2d b)
{
	return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}
