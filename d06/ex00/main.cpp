/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 11:15:33 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/15 11:15:34 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <iostream>
#include <climits>
void parse(std::string input) {
	// std::cout << std::to_chars(input) << std::endl;
	try {
		long long base = std::stoll(input);
		float f = static_cast<float>(base);
	int i = static_cast<int>(base);
	double d = static_cast<double>(base);
	char c = static_cast<char>(base);
	
	if (i >= 32 && i <= 127) {
		printf("char : '%c'\n", c);
	} else if ( i >= 0 &&  i < 32){
		printf("char : Non displayable\n");
	} else {
		printf("char : impossible\n");
	}

	if (i >= INT_MIN || i <= INT_MAX) {
		printf("int : impossible\n");
	} else {
		printf("int : %i\n", i);
	}
	printf("float : %.1ff\n", f);
	printf("double : %.1f\n", d);		
	}catch( std::exception &e){
		std::cout << "Error" << std::endl;
		return ;
	}
	
	
}


int main(int argc, char **argv) {
	if (argc == 2) {
		parse(std::string(argv[1]));
	}
	return (0);
}