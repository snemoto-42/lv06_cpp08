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

		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;
		typedef typename Container::reverse_iterator reverse_iterator;
		// typedef typename Container::const_reverse_iterator const_reverse_iterator;

		iterator begin(){return this->c.begin();}
		iterator end(){return this->c.end();}

		const_iterator cbegin() const {return this->c.begin();}
		const_iterator cend() const {return this->c.end();}

		reverse_iterator rbegin(){return this->c.rbegin();}
		reverse_iterator rend(){return this->c.rend();}

		// const_reverse_iterator crbegin() const {return this->c.crbegin();}
		// const_reverse_iterator crend() const {return this->c.crend();}

		T & top(void);
		bool empty(void) const;
		size_t size(void) const;
		void push(T const&);
		void pop(void);

		// typedef typename std::stack<T>::container_type::iterator iterator;
		// iterator begin(void){ return this->c.begin();}
		// iterator end(void){ return this->c.end();}
		// MutantStack & operator++(void)
		// {
		// 	++(this->c.begin());
		// 	return *this;
		// }
		// MutantStack & operator--(void)
		// {
		// 	--(this->c.begin());
		// 	return *this;
		// }
		// bool operator!=(MutantStack const& other) const
		// {
		// 	return this->c.begin() != other.c.begin();
		// }
		// T operator*(void) const
		// {
		// 	return *(std::stack<T>::c.begin());
		// }

	// private:
		// std::stack<T> _internalStack;
};

#include "MutantStack.tpp"
