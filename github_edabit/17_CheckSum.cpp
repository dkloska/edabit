#include "17_CheckSum.h"

bool CheckSum::lessThan100(int num1, int num2) {
	bool result = false;
	if (num1 + num2 < 100) result = true;
	return result;
}