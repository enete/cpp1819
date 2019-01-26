#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "point.h"

/**
 * Berechnet Entfernung von (0,0) bis (x,y)
 */
double point_length(point_t* this)
{
	return sqrt(x * x + y * y);
}

/**
 * Berechnung der Differenz der Punkte
 */
point_t point_diff(point_t* a, point_t* b)
{
	return new point_t(a.x - b.x, a.y - b.y);
}

/**
 * Berechnung der Distanz der Punkte
 */
double point_dist(point_t* a, point_t* b)
{
	return point_t.point_diff(b, a).length();
}

