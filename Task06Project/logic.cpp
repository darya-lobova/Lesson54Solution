// Task 06 [The sum III]
// Сумма
//
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму чётных чисел от 1 до N.

#include "logic.h"

int recursion(int number) {
	//base case
	if (number == 2) {
		return 2;
	}

	//recursion case
	return number + recursion(number - 2);
}

#include "logic.h"

int sum(int number) {
	if (number <= 0) {
		return -1;
	}

	number -= (number % 2 == 0 ? 0 : 1);

	if (number == 0) {
		return 0;
	}

	return recursion(number);
}