#include "middle.h"
#include "easy.h"
#include <iostream>
void itc_num_print(int num) {
	std::cout << num;
}
int itc_len_num(long long num) {
	int col = 0;
	while (num) {
		col++;
		num = num / 10;
	}
	return col;
}
int itc_sum_num(long long num) {
	int sum = 0;
	while (num) {
		sum += num % 10;
		num = num / 10;
	}
	return sum;
}
long long itc_multi_num(long long num) {
	long long prz = 1;
	while (num) {
		prz *= num % 10;
		num = num / 10;
	}
	return prz;
}
int itc_max_num(long long num) {
	int n = 0;
	while (num) {
		if (num % 10 > n)
			n = num % 10;
		num = num / 10;
	}
	return n;
}
int itc_min_num(long long num) {
	int n = 0;
	while (num) {
		if (num % 10 < n) {
			n = num % 10;
			num = num / 10;
		}
	}
	return n;
}