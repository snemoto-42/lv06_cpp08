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

// cost_iterator は c++11 のためコメントアウト

// template <typename T>
// typename T::const_iterator const easyfind(T const& container, int value)
// {
// 	typename T::const_iterator const it = std::find(container.begin(), container.end(), value);
// 	if (it != container.end())
// 	{
// 		return it;
// 	}
// 	else
// 	{
// 		std::stringstream ss;
// 		ss << value << " not fonund in container";
// 		throw std::runtime_error(ss.str());
// 	}
// }
