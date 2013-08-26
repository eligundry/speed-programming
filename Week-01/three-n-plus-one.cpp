/*
 * =====================================================================================
 *
 *       Filename:  three-n-plus-one.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  08/26/2013 03:00:55 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eli Gundry
 *
 * =====================================================================================
 */
#include <iostream>

int main(void)
{
	int num = 0,
		count = 0;

	std::cin >> num;

	while (num != 1) {
		if ((num % 2) == 0) {
			num /= 2;
		} else {
			num *= 3;
			++num;
		}

		++count;
	}

	std::cout << count << std::endl;

	return 0;
}
