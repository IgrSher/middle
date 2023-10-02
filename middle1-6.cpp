#include "middle.h"
#include "easy.h"
#include <iostream>
void itc_num_print(int num) {
	std::cout << num;
}
long long itc_len_num(long long num) {
	long long col = 0;
	if (num == 0)
		return 1;
	while (num) {
		col++;
		num = num / 10;
	}
	return col;
}
long long itc_sum_num(long long num) {
	long long sum = 0;
	while (num) {
		sum += itc_abs(num % 10);
		num = num / 10;
	}
	return sum;
}
long long itc_multi_num(long long num) {
	long long prz = 1;
	while (num) {
		prz *= itc_abs(num % 10);
		num = num / 10;
	}
	return prz;
}
int itc_max_num(long long num) {
	int max = 0;
	while (num) {
		int d = itc_abs(num % 10);
		if (d > max)
			max = d;
		num = num / 10;
	}
	return max;
}
int itc_min_num(long long num) {
	int min = 10;
	while (num) {
		int d = itc_abs(num % 10);
		if (d < min) 
			min = d;
		num = num / 10;
	}
	return min;
}
