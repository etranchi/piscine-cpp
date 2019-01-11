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


std::string getValue(std::string src, Fixed & base);
Fixed parse(std::string src, Fixed & base);


std::string parseOperand(std::string src, Fixed & base) {
	int i = -1;
	std::cout << "operand" << std::endl;
	std::cout << base << std::endl;
	std::cout << src << std::endl;
	Fixed toDo;
	while (++i < src.size()) {
		if (src[i] == '+') {

			src = getValue(&src[++i], toDo);
			std::cout << "TODO" << std::endl;
			std::cout << toDo << std::endl;
			std::cout << &src[i] << std::endl;
			base = Fixed(base + toDo);
			return &src[i];
		} else if (src[i] == '-') {
			src = getValue(&src[++i], toDo);
			base = Fixed(base - toDo);
			return &src[i];
		} else if (src[i] == '*') {
			src = getValue(&src[++i], toDo);
			base = Fixed(base * toDo);
			return &src[i];
		} else if (src[i] == '/') {
			src = getValue(&src[++i], toDo);
			base = Fixed(base / toDo);
			return &src[i];
		}
	}
	return &src[i];
}

std::string getValue(std::string src, Fixed & base) {
	std::string input = "";
	int i = -1;
	std::cout << "value" << std::endl;
	std::cout << base << std::endl;
	std::cout << src << std::endl;
	while (++i < src.size()) {
		while(isdigit(src[i]) || src[i] == '.' || src[i] == ' ' || src[i] == '(' || src[i] == ')') {
			std::cout << src[i] << std::endl;
			if (src[i] == '(') {
				base = parse(&src[++i], base);
			}
			else if (src[i] == '+' || src[i] == '-' || src[i] == '/' || src[i] == '*') {
				std::cout << "je passe bien ici" << std::endl;
				src = parseOperand(&src[i], base);
			}
			else if (src[i] != ' ' && (src[i] != '(' || src[i] != ')')) {
				input += src[i++];
				std::cout << "grsajdfiolwhFGJN" << input << std::endl;
			} else if (src[i] == ' '){
				i++;
			}
		}
				std::cout << "grsajdfiolwhFGJN" << input << std::endl;
		while (src[i] == ' ') {
			i++;
		}
				std::cout << "grsajdfiolwhFGJN" << input << std::endl;
		if (src[i] == '+' || src[i] == '-' || src[i] == '/' || src[i] == '*') {
				std::cout << "je passe bien ici" << std::endl;
				src = parseOperand(&src[i], base);
		}
		//if (src[i] == '\0' ||  src[i] == ')') {
		//	return &src[i];
		// }
		std::cout << "grsajdfiolwhFGJN" << input << std::endl;
		std::cout << "input" << std::endl;
		std::cout << input << std::endl;
		std::cout << &src[i] << std::endl;
		if ((input == "" || input == ")" )) {
			return "";
		}
		float value = std::stof(input);
		base = Fixed(value);
		if (input[input.size() - 1] == ')'){
			std::cout << "je cuuuut" << std::endl;
			return &src[input.size() + 1];
		}
		if (src[i] != '\0') {
			src = parseOperand(&src[i], base);
			return src;
		}
	}
	return &src[i];

}

Fixed parse(std::string src, Fixed & base) {
	std::string input = "";
	int i = -1;
	std::cout << "parse" << std::endl;
	std::cout << src << std::endl;
	std::cout << base << std::endl;
	while (++i < src.size()) {
		src = getValue(src, base);
		i = -1; 
		
	}
	return base;
}

int main(int argc, char **argv) {
	if (argc == 2) {
		Fixed init;
		Fixed res = parse(argv[1], init);
		std::cout << res << std::endl;
	}
	return 0;
}

