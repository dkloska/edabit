#include <iostream>
#include "1_Addition.h"

using namespace std;

int main() {
	int num1 = 1;
	int num2 = 3;
	Addition test = Addition(num1, num2);
	test.display();
	cout << test.addition(num1, num2) << endl;
}