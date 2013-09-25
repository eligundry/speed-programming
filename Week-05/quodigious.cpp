/*
 * =====================================================================================
 *
 *       Filename:  quodigious.cpp
 *
 *    Description:  http://www.cs.kent.edu/~rothstei/fall_13/sep23/quodigious.pdf
 *
 *        Version:  1.0
 *        Created:  09/25/2013 04:44:22 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eli Gundry
 *
 * =====================================================================================
 */

#include <iostream>
#include <cmath>

void getQD(int in)
{
	int start = pow(10, in - 1),
		end = pow(10, in),
		digits[10];

	for(int di = 0; start != end; ++start) {
	}

	std::cout << std::endl;
}

int main(void)
{
	int input = 0;

	while (std::cin >> input) {
		getQD(input);
	}

	return 0;
}
