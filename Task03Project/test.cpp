#include "test.h"

void print(int n, int m, string name, int expected) {
	int actual = sum(n, m);
	bool result = expected == actual;

	cout << name << " - " << (result ? "completed successfully. Well DONE!!!\033[1;32m [PASS]"
		: "was not running successfully. ERROR!\033[1;31m [FAIL]") << endl;

	cout << "\033[0m";

	cout << "Sum of numbers between " << n << " and " << m << ": " << actual << endl;
	cout << "----------------------------------------------------" << endl;
}

void test01() {
	int n = 1;
	int m = 5;
	int expected = 15;
	print(n, m, "test01", expected);
}

void test02() {
	int n = 5;
	int m = 1;
	int expected = 15;
	print(n, m, "test02", expected);
}

void test03() {
	int n = -5;
	int m = 5;
	int expected = 0;
	print(n, m, "test03", expected);
}

void test04() {
	int n = 0;
	int m = 0;
	int expected = 0;
	print(n, m, "test04", expected);
}

void test05() {
	int n= 1;
	int m = 1;
	int expected = 1;
	print(n, m, "test05", expected);
}

void test06() {
	int n = 1;
	int m = 100;
	int expected = 5050;
	print(n, m, "test06", expected);
}

void test07() {
	int n = 0;
	int m = 100;
	int expected = 5050;
	print(n, m, "test07", expected);
}

void test08() {
	int n = -2;
	int m = 3;
	int expected = 3;
	print(n, m, "test08", expected);
}

void test09() {
	int n = -2;
	int m = 5;
	int expected = 12;
	print(n, m, "test09", expected);
}