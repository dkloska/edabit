#pragma once
#include <iostream>

using namespace std;
//Create a function that takes two numbers as arguments and returns their sum.
class Addition{
private:
	int add1;
	int add2;
	
public:
	Addition(int add1_k, int add2_k) {
		add1 = add1_k;
		add2 = add2_k;
	}
	void display() {
		cout << add1 << endl;
		cout << add2 << endl;
	}
	int addition(int num1, int num2) {};

};