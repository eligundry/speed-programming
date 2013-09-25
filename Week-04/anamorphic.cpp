/*
 * =====================================================================================
 *
 *       Filename:  anamorphic.cpp
 *
 *    Description:  Anamorphic speed programming challenge
 *					http://www.cs.kent.edu/~rothstei/fall_13/sep16/anamorphic.pdf
 *
 *        Version:  1.0
 *        Created:  09/16/2013 06:19:43 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eli Gundry
 *
 * =====================================================================================
 */

#include <iostream>
#include <cstdio>
#include <cmath>

void morph(const double src[], const double tar[])
{
	double results[2],
		   aspect_ratio[2];

	// source aspect ratio
	aspect_ratio[0] = src[1] / src[0];

	// target aspect ratio
	aspect_ratio[1] = tar[1] / tar[0];

	printf("%f, %f\n", aspect_ratio[0], aspect_ratio[1]);

	if (aspect_ratio[0] >= aspect_ratio[1]) {
		results[0] = tar[0];
		results[1] = floor((tar[0] * src[1]) / src[0]);
	} else {
		results[1] = tar[1];
		results[0] = ceil((tar[1] * src[0]) / src[1]);
	}

	printf("w x h = %f x %f pixels\n", results[0], results[1]);
}

int main(void)
{
	double source[2],
		   target[2];

	std::cin >> source[0] >> source[1] >> target[0] >> target[1];

	printf("(%fx%f) (%fx%f)\n", source[0], source[1], target[0], target[1]);

	morph(source, target);

	return 0;
}
