#ifndef SPAN_H
# define SPAN_H
#include <iostream>
#include <list>
class Span {
public:

	Span(unsigned int);
	Span(Span const & ref);
	~Span();
	void addNumber(int);
	std::list<int> list;
	unsigned int length;
	int shortestSpan();
	int longestSpan();
	class Exception : public std::exception {
	public:
		Exception();
		Exception(Exception const & ref);
		virtual ~Exception() throw();
		virtual const char *what() const throw();
	};
private:
	Span();

};


#endif