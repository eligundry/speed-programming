/*
 * =====================================================================================
 *
 *       Filename:  absent.cpp
 *
 *    Description:  The absent problem for speed programming
 *					(http://www.cs.kent.edu/~rothstei/fall_13/sep30/absent.pdf)
 *
 *        Version:  1.0
 *        Created:  09/30/2013 05:52:21 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eli Gundry
 *
 * =====================================================================================
 */

#include <cstdlib>
#include <cstdio>
#include <string>
#include <iostream>
#include <list>

void clear (std::list<std::string> &kill)
{
	std::list<std::string> empty;
	std::swap(kill, empty);
}

int main()
{
	std::string input;

	while (getline(std::cin, input)) {
		std::list<std::string> q;
		clear(q);
		q.push_back("");

		while (true) {
			std::string prefix = q.back();
			q.pop_back();

			for (char c = 'a'; c <= 'c'; ++c) {
				std::string sub = prefix + c;

				if (input.find(sub)) {
					q.push_back(sub);
				} else {
					std::cout << sub << " is absent from " << input << std::endl;
					exit(0);
				}
			}
		}
	}

	return 0;
}
