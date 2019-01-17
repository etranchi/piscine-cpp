
#include <iostream>

template<typename T>
void iter(T *array, unsigned int size, void (*f)(T &)) {

	int i = -1;
	while(++i < size) {
		f(array[i]);
	}

}

template<typename U>
void increment(U i ){
	i++;
}

int main() {
	char array[] ={'a' , 'b', 'c', 'd', 'e', 'f'};
	int array1[] = {1,2,3,4,5,6};
	::iter(array, 6, increment);
	int i = -1;

	while(++i < 6) {
		std::cout << array[i] << std::endl;
	}

	::iter(array1, 6, increment);
	i = -1;

	while(++i < 6) {
		std::cout << array1[i] << std::endl;
	}

	return 0;
}