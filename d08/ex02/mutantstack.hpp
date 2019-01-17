
#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H
# include <stack>
# include <deque>
#include <iterator>

template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>{
protected:
	using std::stack<T, Container>::c;
	typedef typename Container::iterator it;
public:
	MutantStack();
	~MutantStack();
	MutantStack(T n);
	it begin() { return std::begin(Container::c);};
	it end() { return std::end(Container::c);};
private:

};

#endif