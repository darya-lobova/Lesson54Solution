#include "test.h"

void print(int number, string name, int expected) {
	int actual = sum_of_cubes(number);
	bool result = expected == actual;

	cout << name << " - " << (result ? "completed successfully. Well DONE!!!\033[1;32m [PASS]"
		: "was not running successfully. ERROR!\033[1;31m [FAIL]") << endl;

	cout << "\033[0m";

	cout << "Sum of cubes is " << actual << endl;
	cout << "----------------------------------------------------" << endl;
}

void test01() {
	int number = 1;
	int expected = 1;
	print(number, "test01", expected);
}

void test02() {
	int number = 2;	
	int expected = 9;	// 1 + 8
	print(number, "test02", expected);
}

void test03() {
	int number = 3;
	int expected = 36;	// 1 + 8 + 27
	print(number, "test03", expected);
}

void test04() {
	int number = 4;
	int expected = 100;	// 1 + 8 + 27 + 64
	print(number, "test04", expected);
}

void test05() {
	int number = 0;
	int expected = -1;
	print(number, "test05", expected);
}

void test06() {
	int number = -1;
	int expected = -1;
	print(number, "test06", expected);
}

void test07() {
	int number = -77;
	int expected = -1;
	print(number, "test07", expected);
}