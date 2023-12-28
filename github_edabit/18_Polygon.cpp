#include "18_Polygon.h"

int Polygon::sumPolygon(int n) {
	if (n > 2) return (n - 2) * 180;
	else return 0;
}