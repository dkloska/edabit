//Create a function that takes two numbers as arguments and returns their sum.
#include "1_Addition.h"
#include <iostream>

Addition::Addition(int add1_k, int add2_k) {
	add1 = add1_k;
	add2 = add2_k;
}

void Addition::display() {
	cout << add1 << endl;
	cout << add2 << endl;
}

int Addition::addition(int num1, int num2) {
	return num1 + num2;
}