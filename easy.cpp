#include <iostream>
#include "easy.h"
void itc_fio(void) {
	std::cout << "Sher ";
	itc_name();
	std::cout << "Kar ";
}
void itc_name(void) {
	std::cout << "Igr ";
}
int itc_abs(int num) {
	int f;
	if (num < 0)
		f = num * -1;
	else
		f = num;
	return f;
}
double itc_fabs(double num) {
	if (num > 0)
		return num;
	else
		return -num;
}
int itc_revnbr(int num) {
	int a, b, c;
	a = num % 10;
	b = (num % 100 - a) / 10;
	c = num / 100;
	return (a * 100) + (b * 10) + c;
}
bool itc_iseven(int num) {
	return num % 2 == 0;
}
int itc_max(int num1, int num2) {
	if (num1 > num2)
		return num1;
	else
		return num2;
}
int itc_min(int min1, int min2) {
	if (min1 <  min2)
		return min1;
	else
		return min2;
}
double itc_fmax(double num, double num2) {
	if (num > num2)
		return num;
	else
		return num2;
}
double itc_fmin(double num, double num2) {
	if (num < num2)
		return num;
	else
		return num2;
}
int itc_sqrt(int num) {
	if (num == 0)
		return 0;
	else {
		for (int i = 0; i * i <= num; i++) {
			if (i * i == num)
				return i;
		}
		return -1;
	}
}
int itc_skv(int num) {
	if (num > 0)
		return num * num;
	return -1;
}
int itc_spr(int a, int b) {
	if (a > 0 && b > 0)
		return a * b;
	return -1;
}
int itc_str(int a, int b, int c) {
	if ((a > 0 && b > 0 && c > 0) && ((a > b + c) && (b > a + c) && (c > a + b))) { 
		double p = (a + b + c) / 2;
		int s = itc_sqrt(p * (p - a) * (p - b) * (p - c));
		if (s != 0)
			return s;
		else
			return -1;
	}
	else return -1;
}
double itc_scir(int radius) {
	if (radius > 0)
		return radius * radius * 3.14;
	else return -1;
}
double itc_pow(int num, int step) {
	int numnum = 1;
	for (int i = 0; i < itc_abs(step); i++)
		numnum = numnum * num;
	if (step < 0)
		return 1.0 / numnum;
	else
		return numnum;
}
bool itc_ispositive(int num) {
	return num >= 0;
}
bool itc_ispositive_d(double num) {
	return num >= 0;
}