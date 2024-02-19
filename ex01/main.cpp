#include "Span.hpp"

int main()
{
	try
	{
		std::cout << "\n<<< sample Test >>>" << std::endl;
		Span sp = Span(2);
		sp.addNumber(INT_MAX);
		sp.addNumber(INT_MIN);
		sp.printSpan();
		std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan: " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "\n<<< copy assignment Test >>>" << std::endl;
		Span sp = Span(4);
		sp.addNumber(INT_MAX);
		sp.addNumber(INT_MIN);
		sp.addNumber(0);
		sp.addNumber(0);

		Span copyed;
		copyed = sp;
		copyed.printSpan();
		std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan: " << sp.longestSpan() << std::endl;
	
		std::cout << "\n<<< copy constructor Test >>>" << std::endl;
		Span copyed2(sp);
		copyed2.printSpan();
		std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan: " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	

	std::cout << "\n<<< 10000 Test >>>" << std::endl;
	try
	{
		Span sp = Span(10000);
		for (int i = 10000; i > 0; --i)
			sp.addNumber(i);
		// sp.printSpan();
		std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan: " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	

	std::cout << "\n<<< no span Test >>>" << std::endl;
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(6);
		sp.addNumber(6);
		sp.addNumber(6);
		sp.addNumber(6);
		std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan: " << sp.longestSpan() << std::endl;
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

	std::cout << "\n<<< Error Test for addNumbers >>>" << std::endl;
	try
	{
		Span sp = Span(1);
		sp.addNumber(6);
		sp.addNumbers(sp.getItBegin(), sp.getItEnd());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	

	std::cout << "\n<<< Error Test for shortestSpan >>>" << std::endl;
	try
	{
		Span sp = Span(0);
		std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	

	std::cout << "\n<<< Error Test for longestSpan >>>" << std::endl;
	try
	{
		Span sp = Span(2);
		sp.addNumber(6);
		// sp.addNumber(6);
		std::cout << "longestSpan: " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	return 0;
}
