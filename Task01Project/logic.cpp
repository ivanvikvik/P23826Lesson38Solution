#include "logic.h"

int get_max_digit(long long number) {

	if (number < 0) {
		number *= -1;
	}

	int max = 0;

	while (number != 0) {
		int digit = number % 10;

		if (max < digit) {
			max = digit;
		}

		number /= 10;
	}


	return max;
}