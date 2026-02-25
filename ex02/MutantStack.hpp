#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack() : std::stack<T, Container>() {}
		MutantStack(const MutantStack& src) : std::stack<T, Container>(src) {}
		~MutantStack() {}

		MutantStack& operator=(const MutantStack& src)
		{
			if (this != &src)
				std::stack<T, Container>::operator=(src);
			return *this;
		}

		typedef typename std::stack<T, Container>::container_type::iterator iterator;
		iterator begin(){ return this->c.begin(); }
		iterator end()	{ return this->c.end(); }
};

#endif
