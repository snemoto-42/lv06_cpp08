#pragma once

#include <iostream>

template <typename T>
void easyfind(T& container, int value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it != container.end())
	{
		std::cout << value << " found at position " << std::distance(container.begin(), it) << std::endl;
	}
	else
		throw std::runtime_error("the value not fonund in container");
}
