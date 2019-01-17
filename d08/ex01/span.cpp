
#include "span.hpp"

Span::Span(unsigned int n) : length(n) {}
Span::~Span(){};
Span::Span() {};
Span::Span(Span const & ref) { *this = ref;}
Span::Exception::Exception() {}
Span::Exception::~Exception() throw() {}
Span::Exception::Exception(Exception const & ref) {*this = ref;}



void Span::addNumber(int number) {
	if (this->list.size() < this->length) {
		list.push_back(number);
	}
	else {
		throw Span::Exception();
	}
}

int Span::shortestSpan() {
	std::list<int>::const_iterator it = this->list.begin();
	std::list<int>::const_iterator ite = this->list.end();
	int span = 1000000;
	int tmp;
	if (this->list.size() <= 1) {
		throw Span::Exception();
	}
	while(it != ite) {
		if (tmp) {
			if (abs(tmp - *it) < span) {
				span = abs(tmp - *it);
			}
		}
		tmp = *it;
		it++;
	}
	return span;
}

int Span::longestSpan() {
	std::list<int>::const_iterator it = this->list.begin();
	std::list<int>::const_iterator ite = this->list.end();
	int span = 0;
	int tmp;
	if (this->list.size() <= 1) {
		throw Span::Exception();
	}
	while(it != ite) {
		if (tmp) {
			if (abs(tmp - *it) > span) {
				span = abs(tmp - *it);
			}
		}
		tmp = *it;
		it++;
	}
	return span;
}

const char *Span::Exception::what() const throw() {
	return "An error occured...";
}


