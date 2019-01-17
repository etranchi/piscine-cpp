/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 12:40:11 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/15 12:40:12 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data { 
	char s1[8];
	int n; 
	char s2[8];
};


void *serialize(void) {
	std::string data = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
	char *buffer[8];
	void *i;
	int j = -1;
	while (++j < 8) {
		int ra = rand() % data.size();
		buffer[j] = &data[ra];
		i & buffer[j];
	}
	
	return i;
}

// Data *deserialize(void *raw) {
// 	std::string buffer[8];
// 	int i = -1;
// 	Data *d = new Data();
// 	while(++i < 8) {
// 		buffer[i] = raw;
// 		raw++;
// 	}
// 	d->s1 = buffer;
// 	d->n = raw++;
// 	i = -1;
// 	while(++i < 8) {
// 		buffer[i] = raw;
// 		raw++;
// 	}
// 	d->s2 = buffer;
// 	return d;

// }

int main() {
	void *test = serialize();
	// Data *t = deserialize(test);

	// std::cout << t->s1 << std::endl;
	// std::cout << t->n << std::endl;
	// std::cout << t->s2 << std::endl;
}