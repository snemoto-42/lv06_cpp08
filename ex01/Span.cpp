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
		for (unsigned int i = 0; i < _len; ++i)
			_numbers.push_back(other._numbers[i]);
	}
	return (*this);		
}

void Span::addNumber(int num)
{
	if (_numbers.size() >= _len)
		throw std::runtime_error("Span is full");
	_numbers.push_back(num);
}

int Span::shortestSpan(void) const
{
	if (_numbers.size() < 2)
		throw std::runtime_error("Span with less than two numbers");

	int minSpan = std::numeric_limits<int>::max();
	for (size_t i = 0; i < _numbers.size() - 1; ++i)
		minSpan = std::min(minSpan, std::abs(_numbers[i + 1] - _numbers[i]));
	return minSpan;
}

int Span::longestSpan(void) const
{
	if (_numbers.size() < 2)
		throw std::runtime_error("Span with less than two numbers");

	int maxSpan = std::numeric_limits<int>::min();
	for (size_t i = 0; i < _numbers.size() - 1; ++i)
		maxSpan = std::max(maxSpan, std::abs(_numbers[i + 1] - _numbers[i]));
	return maxSpan;
}

void Span::addRandomNumbers(unsigned int size)
{
	if (_numbers.size() + size > _len)
		throw std::runtime_error("Adding these numbers would exceed the maximum span size");
	
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(std::numeric_limits<int>::min(), std::numeric_limits<int>::max());

	for (unsigned int i = 0; i < size; ++i)	
		_numbers.push_back(dis(gen));
}
