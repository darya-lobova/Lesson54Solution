// Task X [The triangular number]
// Треугольное число
//
// Необходимо реализовать программу, которая вычисляет n-ное треугольное число.
// Треугольное число – это сумма чисел от 1 до N. 
// n-ное треугольное число Tn – это сумма n первых натуральных чисел:
// T1 = 1
// T2 = 1 + 2 = 3
// T3 = 1 + 2 + 3 = 6
// T4 = 1 + 2 + 3 + 4 = 10
// T5 = 1 + 2 + 3 + 4 + 5 = 15
// T6 = 1 + 2 + 3 + 4 + 5 + 6 = 21

#include "logic.h"

int recursion(int index) {
	//base case
	if (index == 1) {
		return 1;
	}
	//recursion case
	return recursion(index - 1) + index;
}

int get_triangle_number(int index) {
	if (index <= 0) {
		return index;
	}
}