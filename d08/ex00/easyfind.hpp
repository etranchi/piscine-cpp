#ifndef EASYFIND_H
# define EASYFIND_H

template<typename T>
int easyfind(T *ref, int to_search) {
	int i = -1;
	while (ref[++i] && i < ref[i]) {
		if (to_search == ref[i]) {
			return i;
		}
	}
	return (-1);
}

#endif