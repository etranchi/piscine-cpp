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
		Bureaucrat *b = new Bureaucrat("John", 1);
		std::cout << b << std::endl;
		b->incrementGrade();
	} catch (std::exception & e) {
		std::cout << "Error" << std::endl;
	}
	return 0;
}