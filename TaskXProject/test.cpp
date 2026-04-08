#include "test.h"

void print(int index, string name, int expected) {
	int actual = get_triangle_number(index);
	bool result = expected == actual;

	cout << name << " - " << (result ? "completed successfully. Well DONE!!!\033[1;32m [PASS]"
		: "was not running successfully. ERROR!\033[1;31m [FAIL]") << endl;

	cout << "\033[0m";

	cout << index << " - triangle number is " << actual << endl;
	cout << "----------------------------------------------------" << endl;
}

void test01() {
	int index = 1; 
	int expected = 1;
	print(index, "test01", expected);
}

void test02() {
	int index = 2;
	int expected = 3;
	print(index, "test02", expected);
}

void test03() {
	int index = 3;
	int expected = 6;
	print(index, "test03", expected);
}

void test04() {
	int index = 4;
	int expected = 10;
	print(index, "test04", expected);
}

void test05() {
	int index = 5;
	int expected = 15;
	print(index, "test05", expected);
}

void test06() {
	int index = 6;
	int expected = 21;
	print(index, "test06", expected);
}

void test07() {
	int index = 7;
	int expected = 28;
	print(index, "test07", expected);
}

void test08() {
	int index = 8;
	int expected = 36;
	print(index, "test08", expected);
}

void test09() {
	int index = 9;
	int expected = 45;
	print(index, "test09", expected);
}

void test10() {
	int index = 10;
	int expected = 55;
	print(index, "test10", expected);
}

void test11() {
	int index = 0;
	int expected = 0;
	print(index, "test11", expected);
}

void test12() {
	int index = -5;
	int expected = -5;
	print(index, "test12", expected);
}