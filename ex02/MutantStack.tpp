#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack()
{
	std::cout << GREEN << "MutantStack: " << "Default constructor called" << RESET << std::endl;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << GREEN << "MutantStack: " << "Destructor called" << RESET << std::endl;	
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const& x)
{
	std::cout << GREEN << "MutantStack: " << "Copy constructor called" << RESET << std::endl;
	*this = x;
}

template <typename T>
MutantStack<T> & MutantStack<T>::operator=(MutantStack const& other)
{
	std::cout << GREEN << "MutantStack: " << "Copy assignment operator called" << RESET << std::endl;
	if (this != &other)
	{
		for (typename std::stack<T>::iterator it = this->begin(); it < other.end(); ++it)
			_internalStack.push(other._internalStack);
	}
	return (*this);		
}

template <typename T>
T & MutantStack<T>::top(void)
{
	return _internalStack.top();
}

template <typename T>
bool MutantStack<T>::empty(void) const
{
	return _internalStack.empty();
}

template <typename T>
size_t MutantStack<T>::size(void) const
{
	return _internalStack.size();
}

template <typename T>
void MutantStack<T>::push(T const& ref)
{
	return _internalStack.push(ref);
}

template <typename T>
void MutantStack<T>::pop(void)
{
	return _internalStack.pop();
}
