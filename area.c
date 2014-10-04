#include <math.h>

#include "geom.h"

double area(struct triangle t)
{
	return 0.5 * (fabs((t.c.x - t.a.x) * (t.b.y - t.a.y) - (t.b.x - t.a.x) * (t.c.y - t.a.y)));
}
