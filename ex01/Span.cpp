#include "Span.hpp"

Span::Span():_len(0)
{
	std::cout << GREEN << "Span: " << "Default constructor called" << RESET << std::endl;
}

Span::Span(unsigned int len):_len(len)
{
	std::cout << GREEN << "Span: " << "Constructor with argment called" << RESET << std::endl;
}

Span::~Span()
{
	std::cout << GREEN << "Span: " << "Destructor called" << RESET << std::endl;	
}

Span::Span(Span const& x)
{
	std::cout << GREEN << "Span: " << "Copy constructor called" << RESET << std::endl;
	*this = x;
}

Span& Span::operator=(Span const& other)
{
	std::cout << GREEN << "Span: " << "Copy assignment operator called" << RESET << std::endl;
	if (this != &other)
	{
		_len = other._len;
		addNumbers(other._numbers.begin(), other._numbers.end());
	}
	return (*this);		
}

void Span::printSpan(void) const
{
	std::cout << "Span : ";
	for(std::multiset<int>::iterator it = _numbers.begin(); it != _numbers.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void Span::addNumber(int num)
{
	if (_numbers.size() + 1 > _len)
		throw std::runtime_error("Span is full");
	_numbers.insert(num);
}

std::multiset<int>::iterator Span::getItBegin(void) const{return _numbers.begin();}

std::multiset<int>::iterator Span::getItEnd(void) const{return _numbers.end();}

void Span::addNumbers(std::multiset<int>::iterator begin, std::multiset<int>::iterator end)
{
	size_t lenToAdd = static_cast<size_t>(std::distance(begin, end));
	if (_numbers.size() + lenToAdd > _len)
		throw std::runtime_error("Span is full");
	_numbers.insert(begin, end);
}

unsigned int Span::shortestSpan(void) const
{
	if (_numbers.size() < 2)
		throw std::runtime_error("Span with less than two numbers");

	unsigned int minSpan = std::numeric_limits<unsigned int>::max();
	std::multiset<int>::iterator tmp;
	std::multiset<int>::iterator itEndPrev = --(_numbers.end());
	for(std::multiset<int>::iterator it = _numbers.begin(); it != itEndPrev; ++it)
	{
		tmp = it;
		long val = static_cast<long>(*it);
		long val_next = static_cast<long>(*(++tmp));	
		minSpan = std::min(minSpan, static_cast<unsigned int>(std::abs(val_next - val)));
		// std::cout << "minSpan:" << minSpan << std::endl;
		// std::cout << "val_next:" << val_next << std::endl;
		// std::cout << "val:" << val << std::endl;
	}
	return static_cast<unsigned int>(minSpan);
}

unsigned int Span::longestSpan(void) const
{
	if (_numbers.size() < 2)
		throw std::runtime_error("Span with less than two numbers");
	long val_max = static_cast<long>(*(--_numbers.end()));
	long val_min = static_cast<long>(*(_numbers.begin()));	
	unsigned int longestSpan = static_cast<unsigned int>(std::abs(val_max - val_min));
	return (longestSpan);
}
