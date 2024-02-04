#include "easyfind.hpp"
#include <vector>
#include <list>

int main(void)
{
	{
		std::cout << "\n<<< Test for vector >>>" << std::endl;
		std::vector<int> numbers;
		for (int i = 0; i < 5; ++i)
		{
			numbers.push_back(i);
		}
		std::cout << "\nfound the value" << std::endl;
		try
		{
			easyfind(numbers, 3);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << "\nnot found the value" << std::endl;
		try
		{
			easyfind(numbers, 6);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}			
	}
	{
		std::cout << "\n<<< Test for list >>>" << std::endl;
		std::list<int> numbers;
		for (int i = 10; 0 < i; --i)
		{
			numbers.push_back(i);
		}
		std::cout << "\nfound the value" << std::endl;
		try
		{
			easyfind(numbers, 3);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << "\nnot found the value" << std::endl;
		try
		{
			easyfind(numbers, -1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}	
	}
	std::cout << std::endl;
	return 0;
}
