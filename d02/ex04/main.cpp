/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 15:01:29 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/09 15:01:31 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"




std::string getOperand(std::string src) { 
	int i = -1;
	while (++i < src.size()) {
		if (src[i] == '+' || src[i] == '-' || src[i] == '/' || src[i] == '*') {
			return &src[i];
		}
	}
	return src;
}

Fixed getValue(std::string src);

Fixed performOperand(Fixed f, std::string src) {
	int i = 0;
	src = getOperand(&src[i]);
	std::cout << src << std::endl;
	if (src[0] == '+') {
		std::cout <<  "add done" << std::endl;
		return f + getValue(&src[1]);
	} else if (src[0] == '-') {
		std::cout <<  "minus done" << std::endl;
		return f - getValue(&src[1]);
	} else if (src[0] == '/') {
		std::cout <<  "divide done" << std::endl;
		return f / getValue(&src[1]);
	} else if (src[0] == '*') {
		std::cout <<  "mult done" << std::endl;
		return f * getValue(&src[1]);
	} else {
		return f;
	}
}

Fixed getValue(std::string src) {
	std::cout << src << std::endl;
	std::string input = "";

	int i = -1;
	while (++i < src.size()) {
		while(isdigit(src[i]) || src[i] == '.' || src[i] == ' ' || src[i] == '(' || src[i] == ')') {
			if (src[i] == '('){
				return getValue(&src[++i]);
			}
			else if (src[i] != ' '){
				input += src[i++];
			} else {
				i++;
			}
		}
		std::cout << input << std::endl;
		float value = std::stof(input);
		Fixed f = Fixed(value);
		std::cout << "PLOUFUUUUFUF" << std::endl;
		std::cout << input << std::endl;
		if (input[1] == ')'){
			return performOperand(getValue(&src[i]), &src[i]);
		}
		return performOperand(f, &src[i]);
		
	}
	return Fixed();
}

int main(int argc, char **argv) {
	if (argc == 2) {
		Fixed res = getValue(argv[1]);
		std::cout << res << std::endl;
	}
	return 0;
}

