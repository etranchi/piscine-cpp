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
	} catch (Bureaucrat::GradeTooHighException & e) {
		std::cout << "1" << std::endl;
		std::cout << e.what() << std::endl;
	}catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << "1" << std::endl;
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat c("yoo", 150);
		std::cout << c << std::endl;
		c.decrementGrade();
	} catch (std::exception & e) {
		std::cout << "2" << std::endl;
		std::cout << e.what() << std::endl;
	}	
	try {
		Bureaucrat *d = new Bureaucrat("Poulet", 151);
		std::cout << d << std::endl;
		d->decrementGrade();
	} catch (Bureaucrat::GradeTooHighException & e) {
		std::cout << "3" << std::endl;
		std::cout << e.what() << std::endl;
	}catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << "3" << std::endl;
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}