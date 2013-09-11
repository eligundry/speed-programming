/*
 * =====================================================================================
 *
 *       Filename:  cubes.cpp
 *
 *    Description:  Cubes programming challenge (http://www.cs.kent.edu/~rothstei/fall_13/0909/cubes.pdf)
 *
 *        Version:  1.0
 *        Created:  09/09/2013 07:25:31 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eli Gundry
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(void)
{
	int a =	1,
		b = 1,
		c = 1,
		d = 1;

	for (; a <= 200; ++a) {
		for (b = 1; b < a; ++b) {
			for (c = 1; c < b; ++c) {
				for (d = 1; d < c; ++d) {
					if ((a * a * a) == ((b * b * b) + (c * c * c) + (d * d * d))) {
						printf("Cube = %d, Triple = (%d,%d,%d)\n", a, b, c, d);
						b = c = d = a;
					}
				}
			}
		}
	}

	return 0;
}
