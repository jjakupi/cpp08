#include "Span.hpp"

Span::Span() : m_N(0){}

Span::Span(unsigned int N) : m_N(N){}

Span::Span(const Span& src)
{
	*this = src;
}

Span& Span::operator=(const Span& src)
{
	if(this != &src)
	{
		m_N = src.m_N;
		m_v = src.m_v;
	}
	return *this;
}

void Span::addNumber(int n)
{
	if(m_v.size() == m_N)
		throw(AlreadyFull());
	m_v.push_back(n);
}

int Span::shortestSpan()
{
	if(m_v.size() < 2)
		throw(NotEnoughNumbers());
 	std::vector<int> tmp = m_v;
	sort(tmp.begin(), tmp.end());
	int minDiff = tmp[0];

	for (unsigned int i = 0; i < tmp.size() - 1; i++)
	{
		int diff = tmp[i + 1] - tmp[i];

		if (diff < minDiff)
		{
			minDiff = diff;
		}
	}
	return minDiff;
}

int Span::longestSpan()
{
	if(m_v.size() < 2)
		throw(NotEnoughNumbers());
	int i = *min_element(m_v.begin(), m_v.end());
	int j = *max_element(m_v.begin(), m_v.end());
	int res = j - i;
	return res;
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if(m_v.size() + std::distance(begin, end) > m_N)// we check if the size of the vector plus the distance betwen begin and end
		throw(AlreadyFull());					 // is smaller than m_N
	m_v.insert(m_v.end(), begin, end);//Element Shifting, Shifts elements after the insertion point,
												//thats why we start at the end.
}

Span::~Span(){}
