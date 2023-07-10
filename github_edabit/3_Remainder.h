//There is a single operator in C++, capable of providing the remainder of a division operation. Two numbers are passed as parameters. The first parameter divided by the second parameter will have a remainder, possibly zero. Return that value.
#pragma once

class Remainder {

private:
	int divider;
	int divisor;

public:
	Remainder(int divider_k, int divisor_k);
	int remainder(int a, int b);
};