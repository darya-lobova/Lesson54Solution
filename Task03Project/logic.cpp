// Task 03 [The sum II]
// Сумма 
// 
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму чисел от N до M.

#include "logic.h"

int recursion(int n, int m) {
	//base case
	if (n == m) {
		return n;
	}

	//recursion case
	return m + recursion(n, m - 1);
}

#include "logic.h"

int sum(int n, int m) {
	if (n > m) {
		return recursion(m, n);
	}

	return recursion(n,m);
}