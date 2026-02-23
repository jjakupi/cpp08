#ifndef EASY_FIND_HPP
#define EASY_FIND_HPP

#include <algorithm>
#include <exception>
#include <iostream>
#include <vector>
#include <vector>
#include <list>
#include <deque>

class NotFoundException : public std::exception
{
	public :
		virtual const char * what() const throw()
		{
			return ("No occurrence is found");
		}
};

template <typename T>
typename T::iterator easyfind(T& container, int n)
{
	typename T::iterator sea;

	sea = std::find(container.begin(), container.end(), n);
	if(sea == container.end())
		throw (NotFoundException());
	return sea;
}

#endif
