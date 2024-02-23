#include "easyfind.hpp"
#include <vector>
#include <list>

int main(void)
{
	{
		std::cout << "\n<<< Test for non-const vector >>>" << std::endl;
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
			std::cout << "before value:" << *it << std::endl;
			++(*it);
			std::cout << "after value:" << *it << std::endl;
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
		std::cout << "\n<<< Test for non-const list >>>" << std::endl;
		std::list<int> numbers;
		std::list<int>::iterator it;
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
			std::cout << *it << " found" << std::endl;
			std::cout << "before value:" << *it << std::endl;
			++(*it);
			std::cout << "after value:" << *it << std::endl;
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
	// {
	// 	std::cout << "\n<<< Test for const list >>>" << std::endl;
	// 	int array[] = {1, 2, 3, 4, 5};
	// 	const std::list<int> numbers(array, array + sizeof(array) / sizeof(int));
	// 	int value = 3;
	// 	std::cout << "\n>>> found the value" << std::endl;
	// 	try
	// 	{
	// 		std::list<int>::const_iterator const& it = easyfind(numbers, value);
	// 		std::cout << *it << " found" << std::endl;
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << e.what() << std::endl;
	// 	}
	// 	std::cout << "\n>>> not found the value" << std::endl;
	// 	try
	// 	{
	// 		std::list<int>::const_iterator it = easyfind(numbers, -1);
	// 		std::cout << value << " found at position " << std::distance(numbers.begin(), it) << std::endl;
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << e.what() << std::endl;
	// 	}	
	// }
	std::cout << std::endl;
	return 0;
}
