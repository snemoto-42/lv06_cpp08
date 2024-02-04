#pragma once

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"

#include <iostream>
#include <vector>
#include <random>

class Span
{
	public:
		Span();
		Span(unsigned int);
		~Span();
		Span(Span const&);
		Span & operator=(Span const&);

		void addNumber(int);
		int shortestSpan(void) const;
		int longestSpan(void) const;

		void addRandomNumbers(unsigned int);

	private:
		unsigned int _len;
		std::vector<int> _numbers;
};
