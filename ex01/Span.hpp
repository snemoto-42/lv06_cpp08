#pragma once

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"

#include <iostream>
#include <set>

class Span
{
	public:
		Span();
		Span(unsigned int);
		~Span();
		Span(Span const&);
		Span & operator=(Span const&);

		void printSpan(void) const;

		void addNumber(int);
		unsigned int shortestSpan(void) const;
		unsigned int longestSpan(void) const;

		std::multiset<int>::iterator getItBegin(void) const;
		std::multiset<int>::iterator getItEnd(void) const;
		void addNumbers(std::multiset<int>::iterator, std::multiset<int>::iterator);

	private:
		unsigned int _len;
		std::multiset<int> _numbers;
};
