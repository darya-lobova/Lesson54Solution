// Task 09 [The sum VI]
// Сумма
//
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму цифр заданного числа, кратных 5.

#include "logic.h"

int recursion(int number) {
	//base case
	if (number < 10) {
		return number == 5 ? 5 : 0;
	}

	//recursion case
	return recursion(number / 10) + (number % 10 == 5 ? 5 : 0);
}

int sum(int number) {
	number *= number < 0 ? -1 : 1;

	return recursion(number);
}