// Task 01 [The sum I]
// Сумма 
// 
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму чисел от 1 до N.

int recursion(int number) {
	//base case
	if (number == 1) {
		return 1;
	}

	//recursion case
	return number + recursion(number - 1);
}

#include "logic.h"

int sum(int number) {
	
	if (number <= 0) {
		return -1;
	}
	return recursion(number);
}