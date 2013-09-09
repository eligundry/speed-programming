/*
 * =====================================================================================
 *
 *       Filename:  problem5.cpp
 *
 *    Description:  Basically Speaking (http://www.cs.kent.edu/~rothstei/fall_13/0909/base.pdf)
 *
 *        Version:  1.0
 *        Created:  09/09/2013 06:17:49 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eli Gundry
 *
 * =====================================================================================
 */

#include <iostream>
#include <fstream>
#include <string>

int main(void)
{
	std::string line,
		number,
		in_base,
		out_base,
		result;

	std::ifstream input;

	input.open("sample-data.txt");

	while (!input.eof()) {
		std::getline(input, line);

		for (int i = 0; i < line.length(); ++i) {
			if (line[i] != ' ') {
				if (i < 7) number += line[i];
				else if (i < 10) in_base += line[i];
				else out_base += line[i];
			}
		}

		std::cout << "Number is: " << number << std::endl;
		std::cout << "In base is: " << in_base << std::endl;
		std::cout << "Out base is: " << out_base << std::endl;

		// std::cout << result << std::endl;

		number = "";
		in_base = "";
		out_base = "";
		result = "";
	}

	input.close();

	return 0;
}

int char_conv(const char& c)
{
	switch (c) {
		case 'A':
			return 10;
			break;
		case 'B':
			return 11;
			break;
		case 'C':
			return 12;
			break;
		case 'D':
			return 13;
			break;
		case 'E':
			return 14;
			break;
		case 'F':
			return 15;
			break;
	}
}

std::string base_conv(int num, int ib, int ob)
{
	std::string result;



	return result;
}
