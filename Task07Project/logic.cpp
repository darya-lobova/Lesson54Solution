// Task 07 [The number of odd digits]
// Количество нечётных цифр
//
// Необходимо спроектировать и реализовать программу, 
// которая считает количество нечётных цифр
// в заданном целом числе.


#include "logic.h"

int recursion(int number) {
	//base case
	if (number < 10) {
		return number % 2;
	}

	//recursion case
	return recursion(number / 10) + number % 10 % 2;
}

int count_of_odd_digits(int number) {
	number *= number < 0 ? -1 : 1;

	return recursion(number);
}