#include "test.h"

void print(int index, string name, int expected) {
	int actual = get_number(index);
	bool result = expected == actual;

	cout << name << " - " << (result ? "completed successfully. Well DONE!!!\033[1;32m [PASS]"
		: "was not running successfully. ERROR!\033[1;31m [FAIL]") << endl;

	cout << "\033[0m";

	cout << "Number from " << index << " index is " << actual << ".\n";
	cout << "----------------------------------------------------" << endl;
}

void test01() {
	int number = 1;
	int expected = 2;
	print(number, "test01", expected);
}

void test02() {
	int number = 2;	
	int expected = 4;
	print(number, "test02", expected);
}

void test03() {
	int number = 3;
	int expected = 8;
	print(number, "test03", expected);
}

void test04() {
	int number = 4;
	int expected = 16;
	print(number, "test04", expected);
}

void test05() {
	int number = 5;
	int expected = 32;
	print(number, "test05", expected);
}

void test06() {
	int number = 10;
	int expected = 1024;
	print(number, "test06", expected);
}

void test07() {
	int number = -1;
	int expected = -1;
	print(number, "test07", expected);
}

void test08() {
	int number = 0;
	int expected = -1;
	print(number, "test08", expected);
}

void test09() {
	int number = -999;
	int expected = -1;
	print(number, "test09", expected);
}