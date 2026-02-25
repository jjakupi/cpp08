#include "MutantStack.hpp"
#include <iostream>
#include <stack>
#include <list>
int main()
{
	MutantStack<int> mstack;
	mstack.push(5); //LIFO (Last In First Out)
	mstack.push(17);//adddiing

	std::cout << mstack.top()<< std::endl; //checking top is the last element added
	//mstack.pop(); //deleting 17
	std::cout << mstack.top() << std::endl;
	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << "testing if the iterating works" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << "First element of the stack is: ";
	std::cout << *it << std::endl;
	std::cout << "After the incrementing the value is: "; ++it;
	std::cout << *it << std::endl;
	std::cout << "After the decrementing the value is: "; --it;
	std::cout << *it << std::endl;
	std::cout << "Now showing all the values: " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);
	return 0;
}

// int main()
// {
// 	std::list<int> mstack;
// 	mstack.push_back(5); //LIFO (Last In First Out)
// 	mstack.push_back(17);//adddiing
// 	std::cout << mstack.size() << std::endl;

// 	mstack.push_back(3);
// 	mstack.push_back(5);
// 	mstack.push_back(737);
// 	mstack.push_back(0);

// 	std::cout << "testing if the iterating works" << std::endl;
// 	std::list<int>::iterator it = mstack.begin();
// 	std::list<int>::iterator ite = mstack.end();
// 	std::cout << "First element of the stack is: ";
// 	std::cout << *it << std::endl;
// 	std::cout << "After the incrementing the value is: "; ++it;
// 	std::cout << *it << std::endl;
// 	std::cout << "After the decrementing the value is: "; --it;
// 	std::cout << *it << std::endl;
// 	std::cout << "Now showing all the values: " << std::endl;
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	return 0;
// }
