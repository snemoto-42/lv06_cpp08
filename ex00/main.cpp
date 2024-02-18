#include "easyfind.hpp"
#include <vector>
#include <list>

int main(void)
{
	{
		std::cout << "\n<<< Test for vector >>>" << std::endl;
		std::vector<int> numbers;
		std::vector<int>::iterator it;
		int value = 20000;
		for (int i = 0; i < value; ++i)
		{
			numbers.push_back(i);
		}

		std::cout << "\n>>> found the value" << std::endl;
		try
		{
			--value;
			it = easyfind(numbers, value);
			std::cout << value << " found at position " << std::distance(numbers.begin(), it) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << "\n>>> not found the value" << std::endl;
		try
		{
			++value;
			it = easyfind(numbers, value);
			std::cout << value << " found at position " << std::distance(numbers.begin(), it) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}			
	}
	{
		std::cout << "\n<<< Test for list >>>" << std::endl;
		std::list<int> numbers;
		std::list<int>::iterator it;
		int value = 20000;
		for (int i = value; 0 < i; --i)
		{
			numbers.push_back(i);
		}
		std::cout << "\n>>> found the value" << std::endl;
		try
		{
			it = easyfind(numbers, value);
			std::cout << value << " found at position " << std::distance(numbers.begin(), it) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << "\n>>> not found the value" << std::endl;
		try
		{
			it = easyfind(numbers, -1);
			std::cout << value << " found at position " << std::distance(numbers.begin(), it) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}	
	}
	std::cout << std::endl;
	return 0;
}
