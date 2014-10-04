#include <stdio.h>

#include "geom.h"

int main(void)
{
	struct triangle p;
	
	p.a = (struct point2d) {2., 2.};
	p.b = (struct point2d) {-2., 1.};
	p.c = (struct point2d) {0., -3.};
	
	printf("Radius: %f\n", 2*area(p)/(distance(p.a, p.b) + distance(p.b, p.c) + distance( p.c, p.a)));
 
	return(0);
}
