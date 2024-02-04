#include "Span.hpp"

int main()
{
	std::cout << "\n<<< sample Test >>>" << std::endl;
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	

	std::cout << "\n<<< copy assignment Test >>>" << std::endl;
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		Span copyed;
		copyed = sp;
		std::cout << copyed.shortestSpan() << std::endl;
		std::cout << copyed.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	

	std::cout << "\n<<< copy constructor Test >>>" << std::endl;
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		Span copyed(sp);
		std::cout << copyed.shortestSpan() << std::endl;
		std::cout << copyed.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	

	std::cout << "\n<<< 10000 Test >>>" << std::endl;
	try
	{
		Span sp = Span(10000);
		sp.addRandomNumbers(10000);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	

	std::cout << "\n<<< Error Test for addNumber >>>" << std::endl;
	try
	{
		Span sp = Span(1);
		sp.addNumber(6);
		sp.addNumber(3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	

	std::cout << "\n<<< Error Test for shortestSpan >>>" << std::endl;
	try
	{
		Span sp = Span(3);
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	

	std::cout << "\n<<< Error Test for longestSpan >>>" << std::endl;
	try
	{
		Span sp = Span(2);
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	

	std::cout << "\n<<< Error Test for addRandomNumbers >>>" << std::endl;
	try
	{
		Span sp = Span(1);
		sp.addRandomNumbers(10000);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	

	std::cout << std::endl;
	return 0;
}
