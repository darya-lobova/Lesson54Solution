// Task 04 [The sum of cubes]
// Сумма кубов
// 
// Необходимо спроектировать и реализовать программу, 
// которая возвращает сумму кубов чисел от 1 до N.

#include "logic.h"

int recursion(int number) {
	//base case
	if (number == 1) {
		return 1;
	}

	//recursion case
	return pow(number,3) + recursion(number - 1);
}

#include "logic.h"

int sum_of_cubes(int number) {

	if (number <= 0) {
		return -1;
	}
	return recursion(number);
}