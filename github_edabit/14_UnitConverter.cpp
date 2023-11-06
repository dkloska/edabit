#include "14_UnitConverter.h"

int UnitConverter::inchesToFeet(int inches)
{
	if (inches < 12) return 0;
	else return inches / 12;
}
