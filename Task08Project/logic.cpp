// Task 08 [The sequences of powers of two]
// Последовательность степени двойки 
//
// Необходимо спроектировать и реализовать программу, 
// которая находит n-ное число в последовательности 
// степеней двойки: 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, ...

#include "logic.h"

int recursion(int index) {
	//base case
	if (index == 1) {
		return 2;
	}
	return recursion(index - 1) * 2;
}

int get_number(int index) {

	if (index <= 0) {
		return -1;
	}
	return recursion(index);
}