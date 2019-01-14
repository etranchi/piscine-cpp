/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 12:02:11 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/14 12:02:12 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include <iostream>

int main() {
	try {
		Bureaucrat *b = new Bureaucrat("John", 150);
		std::cout << b << std::endl;

		Bureaucrat c;
		std::cout << c << std::endl;
		b->decrementGrade();
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}