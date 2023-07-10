#include "3_Remainder.h"
#include <iostream>

Remainder::Remainder(int divider_k, int divisor_k) {
	divider = divider_k;
	divisor = divisor_k;
}

int Remainder::remainder(int a, int b) {
	return a % b;
}