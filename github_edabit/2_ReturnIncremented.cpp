//Create a function that takes a number as an argument, add one to the number, and return the result.
#include "2_ReturnIncremented.h"
#include <iostream>

ReturnIncremented::ReturnIncremented(int number_k) {
	number = number_k;
}

int ReturnIncremented::returnIncremented(int a) {
	return ++a;
}