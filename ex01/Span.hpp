#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span
{
	private:
		unsigned int		m_N; //hapsira
		std::vector <int>	m_v; //vectori qe vendosim shifrat

	public:

		Span();
		Span(unsigned int N);
		Span(const Span& src);
		Span& operator=(const Span& src);
		~Span();

		void addNumber(int n);
		int  shortestSpan();
		int  longestSpan();
		void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		class AlreadyFull : public std::exception
		{
			public :
			virtual const char * what() const throw()
			{
				return ("Cointainer its full already");
			}
		};

		class NotEnoughNumbers : public std::exception
		{
			public :
			virtual const char * what() const throw()
			{
				return ("Not enough numbers, needed more than 2");
			}
		};
};

#endif
