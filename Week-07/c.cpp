/*
 * =====================================================================================
 *
 *       Filename:  c.cpp
 *
 *    Description:  Our attempt at the 'Give me an E' problem
 *
 *        Version:  1.0
 *        Created:  10/14/2013 06:14:39 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eli Gundry
 *					Brian Boll
 *					Johnny Beedlow
 *
 * =====================================================================================
 */

#include <string>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <sstream>

const int MAX_SIZE = 2000;

void generateNonEs(std::vector<int>& list)
{
	std::ostringstream stream1;
	std::string temp;
	int i = 1,
		place_counter = 0;

	do {
		// Convert int to string
		stream1.str("");
		stream1.clear();
		stream1 << i;
		temp = stream1.str();

		place_counter = 0;
        bool found_e = false;

		for (int it = temp.length() - 1; it > 0 || !found_e; --it, ++place_counter) {
			// zeroes, thousands
			if ((place_counter % 3) == 0) {
				if ((temp[it] != '2') && (temp[it] != '4') && (temp[it] != '6') && (temp[it] != '0')) {
					found_e = true;
				}
			}

			// tens, ten thousands
			if ((place_counter % 3) == 1) {
				if ((temp[it] != '3') && (temp[it] != '4') && (temp[it] != '5') && (temp[it] != '6') && (temp[it] != '0')) {
					found_e = true;
				}

			}

			// hundreds, hundred thousands
			if ((place_counter % 3) == 2) {
				if (temp[it] != '0') {
					found_e = true;
				}
			}


			if (it == 0 && !found_e) {
				list.push_back(i);
			}
		}

		++i;
	} while (list.size() < MAX_SIZE);
}

int main()
{
	char temp[100];
	int input;
	std::vector<int> list_of_non_e, results;

	generateNonEs(list_of_non_e);

	while (std::cin.getline(temp, 100)) {
		sscanf(temp, "%d", input);

		if (input == 0) {
			for (int i = 0; i < results.size(); ++i)
				std::cout << results[i] << std::endl;

			return 0;
		} else {
			results.push_back(list_of_non_e[input - 1]);
		}
	}
}
