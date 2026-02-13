#include "easyfind.hpp"

#include <iostream>
#include <vector>
#include <list>
// #include "easyfind.hpp"

int main()
{
	// VECTOR tests
	std::vector<int> v;
	for (int i = 0; i < 5; ++i)
		v.push_back(i); // 0 1 2 3 4

	try
	{
		std::vector<int>::iterator it = easyfind(v, 3);
		std::cout << "[vector] found: " << *it << std::endl;
		v.erase(easyfind(v, 1));
		std::cout << "[vector] found 4 after erase: " << *it << std::endl;
		*it = 99; // prove that iterator is a position (we can modify through it)
		std::cout << "[vector] after change, v[3] = " << v[3] << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "[vector] error: " << e.what() << std::endl;
	}

	try
	{
		(void)easyfind(v, 42);
		std::cout << "[vector] found 42 (should not happen)" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "[vector] not found 42: " << e.what() << std::endl;
	}

	std::cout << "----" << std::endl;

	// LIST tests
	std::list<int> lst;
	lst.push_back(10);
	lst.push_back(20);
	lst.push_back(30);

	try
	{
		std::list<int>::iterator it = easyfind(lst, 20);
		std::cout << "[list] found: " << *it << std::endl;
		std::replace(lst.begin(), lst.end(), 20, -20);
		std::cout << "[list] found -20 after changing it: " << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "[list] error: " << e.what() << std::endl;
	}

	try
	{
		(void)easyfind(lst, -1);
		std::cout << "[list] found -1 (should not happen)" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "[list] not found -1: " << e.what() << std::endl;
	}

	return 0;
}
