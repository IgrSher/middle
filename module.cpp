#include <iostream>
#include "middle.h"
void itc_num_print(int num) {
	std::cout << num;
}
int itc_len_num(long long num) {
	int col = 1;
	for (int r = 10; num / r >= 1; r *= 10) {
		col++;
	}
	return col;
}
int itc_sum_num(long long num) {
	int sum = 0;
	long long prednum = 0;
	for (int i = 10; num / i >= 1; i *= 10) {
		sum += ((num % i) - prednum) / (i / 10);
		prednum = num % i;
	}
	return sum+1;
}
int itc_