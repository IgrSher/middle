#include "middle.h"
#include "easy.h"
#include <iostream>
long long rev_num(long long num) {
	long long mun = 0;
	int col = 0;
	while (num) {
		col = num % 10;
		mun = (col * 10) + (mun * 10);
		num = num / 10;
	}
	mun = mun / 10;
	return mun;
}
int itc_second_simple_max_num(long long num) {
	if (num - 10 < 0)
		return -1;
	else {
		int max1 = -1, max2 = -1, num1 = num, ind = 0, i = 0;
		while (num) {
			int col = num % 10;
			i++;
			if (col > max1) {
				max1 = col;
				ind = i;
			}
			num /= 10;
		}
		i = 0;
		while (num1) {
			i++;
			int col = num1 % 10;
			if (col > max2 && ind != i)
				max2 = col;
			num1 /= 10;
		}
		if (max1 == max2) return -1;
		else return max2;
	}
}
long long itc_bin_num(long long num) {
	long long revBinNum = 0;
	bool firsZero = true;
	int zerosCol = 0;
	while (num) {
		int n = num % 2;
		revBinNum = revBinNum * 10 + n;
		num /= 2;
		if (n == 0 && firsZero) {
			zerosCol++;
		}
		else {
			firsZero = false;
		}
	}
	long long binNum = rev_num(revBinNum);
	for (int i = 0; i < zerosCol; i++) {
		binNum *= 10;
	};
	return binNum;
}   
long long itc_oct_num(long long num) {
	long long revOctNum = 0;
	bool firsZero = true;
	int zerosCol = 0;
	while (num) {
		int n = num % 8;
		revOctNum = revOctNum * 10 + n;
		num /= 8;
		if (n == 0 && firsZero) {
			zerosCol++;
		}
		else {
			firsZero = false;
		}
	}
	long long octNum = rev_num(revOctNum);
	for (int i = 0; i < zerosCol; i++) {
		octNum *= 10;
	}
	return octNum;
}
int itc_rev_bin_num(long long num) {
	long long DecNum = 0;
	for (long long i = 0; i <= num; i++) {
		int d = itc_abs(num % 10);
		DecNum *= d * itc_pow(2, i);
		num /= 10;
	}
	return DecNum;
}
int itc_rev_oct_num(long long num) {
	long long DecNum = 0;
	for (long long i = 0; i <= num; i++) {
		int d = itc_abs(num % 10);
		DecNum *= d * itc_pow(8, i);
		num /= 10;
	}
	return DecNum;
}
