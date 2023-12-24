#include "15_maxEdgeOfTriangle.h"

int maxEdgeOfTriangle::nextEdge(int egde1, int edge2) {
	return (egde1 + edge2) - 1;
}