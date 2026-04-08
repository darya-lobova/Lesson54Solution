#include "test.h"

void print(int number, string name, int expected) {
	int actual = sum(number);
	bool result = expected == actual;

	cout << name << " - " << (result ? "completed successfully. Well DONE!!!\033[1;32m [PASS]"
		: "was not running successfully. ERROR!\033[1;31m [FAIL]") << endl;

	cout << "\033[0m";

	cout << "Sum of numbers 1... " << number << ": " << actual << endl;
	cout << "----------------------------------------------------" << endl;
}

void test01() {
	int number = 5; 
	int expected = 15;
	print(number, "test01", expected);
}

void test02() {
	int number = -5;
	int expected = -1;
	print(number, "test02", expected);
}

void test03() {
	int number = 0;
	int expected = -1;
	print(number, "test03", expected);	
}

void test04() {
	int number = 1;
	int expected = 1;
	print(number, "test04", expected);
}

void test05() {
	int number = 100;
	int expected = 5050;
	print(number, "test05", expected);
}