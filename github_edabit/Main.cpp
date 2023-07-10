#include <iostream>
#include "3_Remainder.h"

using namespace std;

int main() {
	int num1 = 10;
	int num2 = 4;
	Remainder test = Remainder(num1, num2);
	cout << test.remainder(num1, num2) << endl;
}