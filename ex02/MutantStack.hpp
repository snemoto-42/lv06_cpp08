#pragma once

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"

#include <iostream>
#include <stack>
#include <deque>
#include <list>
#include <vector>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack();
		~MutantStack();
		MutantStack(MutantStack const&);
		MutantStack & operator=(MutantStack const&);

		bool empty(void) const;
		T & top(void);
		size_t size(void) const;
		void push(T const&);
		void pop(void);

		typedef typename Container::iterator iterator;
		typedef typename Container::reverse_iterator reverse_iterator;

		iterator begin();
		iterator end();

		reverse_iterator rbegin();
		reverse_iterator rend();

		// c++11はコメントアウト
		// typedef typename Container::const_iterator const_iterator;
		// typedef typename Container::const_reverse_iterator const_reverse_iterator;

		// const_iterator cbegin() const;
		// const_iterator cend() const;

		// const_reverse_iterator crbegin() const;
		// const_reverse_iterator crend() const;
};

#include "MutantStack.tpp"
