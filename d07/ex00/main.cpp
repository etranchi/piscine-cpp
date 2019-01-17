
#include <iostream>
template<typename T>
void swap(T &a, T &b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T const &min(T const &a, T const &b) {
	if (a == b){
		return b;
	} else {
		return a < b ? a : b;
	}
}

template<typename T>
T const &max(T const &a, T const &b) {
	if (a == b){
		return b;
	} else {
		return a > b ? a : b;
	}
}




int main() {
	double a = 12.00;
	double b = 24.00;

	swap(a,b);
	std::cout << "double a : " << a << std::endl;
	std::cout << "double b : " << b << std::endl;
	std::cout << "min : " << ::min(a,b) << std::endl;
	std::cout << "max : " << ::max(a,b) << std::endl;

	std::string c("coucou1");
	std::string d("coucou2");
	swap(c,d);
	std::cout << "string c : " << c << std::endl;
	std::cout << "string d : " << d << std::endl;
	std::cout << "min : " << ::min(c,d) << std::endl;
	std::cout << "max : " << ::max(c,d) << std::endl;
}