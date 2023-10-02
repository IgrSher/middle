#include "middle.h"
#include "easy.h"
#include <iostream>
int itc_rev_num(long long num) {
	long long mun = 0;
	int col = 0;
	while (num) {
		col = num % 10;
		mun = (col*10)+(mun*10);
		num = num / 10;
	}
	mun = mun / 10;
	return itc_len_num(mun);
}
int itc_null_count(long long num) {
	int col = 0;
	while (num) {
		if (num % 10 == 0) 
			col++;
		num = num / 10;
	}
	return col;
}
bool itc_mirror_num(long long num) {
	long long mun = 0, num1 = num;
	int col = 0;
	while (num) {
		col = num % 10;
		mun = (col * 10) + (mun * 10);
		num = num / 10;
	}
	mun /= 10;
	if (num1 == mun)
		return true;
	else
		return false;
}
int itc_mirror_count(long long num) {
	int n = 0;
	for (long long i = 1; i <= num; i++) {
		long long revi = 0, i1 = i, i2 = i;
		int col;
		while (i2) {
			col = i2 % 10;
			revi = (revi * 10) + col;
			i2 /= 10;
		}
		if (i1 == revi)
			n++;
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
		//return ind1;
	}
}