

#include <iostream>
#include "easyfind.hpp"

int main() {

	int tab[5] = {1 ,22 ,32 ,34 ,35};
	std::cout << easyfind(tab, 34) << std::endl;

	char tab1[5] = {'a' ,'n' ,'o' ,'l' ,'u'};
	std::cout << easyfind(tab1, 'o') << std::endl;

	return 0;
}