#include "Span.hpp"

int main()
{
	{
		std::cout << "BASIC TESTS: " << std::endl;
		Span sp = Span(5);
		//Span sp = Span(2); //Throws:"Not enough numbers, needed more than 2"
		try
		{
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			//sp.addNumber(11); //"Throws:Cointainer its full already"
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "TESTING WITH A RANDOM RANGE: " << std::endl;
		Span sp2 = Span(100);
		std::vector<int> v;
		std::srand(time(NULL));
		for (int i = 0; i < 100; i++)
		{

			int random = rand() % 1000;
			v.push_back(random);
		}
		try
		{
			sp2.addNumber(v.begin(), v.end());
			std::cout << "shortest span: " << sp2.shortestSpan() << std::endl;
			std::cout << "longest span: " << sp2.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "TESTING WITH AND ERROR OF NOT HAVING ENOUGH SPACE:" << std::endl;
		Span sp3 = Span(99);
		std::vector<int> v1;
		std::srand(time(NULL));
		for (int i = 0; i < 100; i++)
		{
			int random = rand() % 10000;
			v1.push_back(random);
		}
		try
		{
			sp3.addNumber(v1.begin(), v1.end());
			std::cout << "shortest span: " << sp3.shortestSpan() << std::endl;
			std::cout << "longest span: " << sp3.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}
