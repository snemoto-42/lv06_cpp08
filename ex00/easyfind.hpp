#pragma once

#include <iostream>
#include <sstream>

template <typename T>
typename T::iterator easyfind(T & container, int value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it != container.end())
	{
		return it;
	}
	else
	{
		std::stringstream ss;
		ss << value << " not fonund in container";
		throw std::runtime_error(ss.str());
	}
}

template <typename T>
typename T::iterator const& easyfind(T const& container, int value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it != container.end())
	{
		return it;
	}
	else
	{
		std::stringstream ss;
		ss << value << " not fonund in container";
		throw std::runtime_error(ss.str());
	}
}
