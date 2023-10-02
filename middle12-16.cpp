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
long long itc_bin_num(long long num) {
	long long binnum, ost = num % 2, res = num / 2;
	int i = 0, k = 0, z = 0;
	num = num / 2;
	binnum = ost;
	while (num) {
		ost = res % 2;
		res = num % 2;
		binnum = binnum * 10 + ost;
		num /= 2;
		if (ost == 0 && k == i) {
			z++;
			k++;
		}	
		i++;
	}
	if (ost == 1)
		return rev_num(((binnum * 10) + 1))*itc_pow(10,z);
	else
		return rev_num(binnum)*itc_pow(10, z);
}                                                                                     