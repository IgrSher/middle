#include "middle.h"
#include "easy.h"
#include <iostream>
int itc_rev_num(long long num) {
	long long mun = 0;
	int col = 0;
	while (num) {
		col = itc_abs(num % 10);
		mun = (col*10)+(mun*10);
		num = num / 10;
	}
	mun = mun / 10;
	return itc_len_num(mun);
}
int itc_null_count(long long num) {
	int col = 0;
	while (num) {
		int d = itc_abs(num % 10);
		if (d == 0) 
			col++;
		num = num / 10;
	}
	return col;
}
bool itc_mirror_num(long long num) {
	long long mun = 0, num1 = num;
	while (num) {
		int d = itc_abs(num % 10);
		mun = (d * 10) + (mun * 10);
		num = num / 10;
	}
	mun /= 10;
	if (itc_abs(num1) == itc_abs(mun))
		return true;
	else
		return false;
}
int itc_mirror_count(long long num) {
	int n = 0;
	if (num > 0) {
		for (int i = 1; i <= num; i++)
			if (itc_mirror_num(i)) n++;
	}
	else {
		for (int i = 1; i >= num; i--)
			if (itc_mirror_num(i)) n++;
	}
	return n;
}
int itc_second_max_num(long long num) {
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
		return max2;
	}
}
