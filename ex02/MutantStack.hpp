#pragma once

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"

#include <iostream>
#include <stack>
#include "MutantStack.tpp"

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		~MutantStack();
		MutantStack(MutantStack const&);
		MutantStack & operator=(MutantStack const&);

		T & top(void);
		bool empty(void) const;
		size_t size(void) const;
		void push(T const&);
		void pop(void);

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin(void){ return this->c.begin();}
		iterator end(void){ return this->c.end();}
		MutantStack & operator++(void)
		{
			++(this->c.begin());
			return *this;
		}
		MutantStack & operator--(void)
		{
			--(this->c.begin());
			return *this;
		}
		bool operator!=(MutantStack const& other) const
		{
			return this->c.begin() != other.c.begin();
		}
		T operator*(void) const
		{
			return *(std::stack<T>::c.begin());
		}

	private:
		std::stack<T> _internalStack;
}; 
