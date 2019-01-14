/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 12:02:30 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/14 12:02:31 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : _name("default"), _grade(150) {

}
Bureaucrat::~Bureaucrat() {

}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < 1) {
		// throw GradeTooHighException();
	}
	if (grade > 150) {
		// throw GradeTooLowException();
	}
	this->_grade = grade;
}

int Bureaucrat::getGrade() const {
	return this->_grade;
}

std::string const Bureaucrat::getName() const {
	return this->_name;
}

std::string Bureaucrat::introduce() const {
	return (this->getName() + ", bureaucrat grade " + std::to_string(this->getGrade()));
}


void Bureaucrat::decrementGrade() {
	this->_grade += 1; 
	if (this->_grade > 150) {
		// throw GradeTooLowException();
	}
	return;
}

void Bureaucrat::incrementGrade() {
	this->_grade -= 1;
	if (this->_grade < 1) {
		// throw GradeTooHighException();
	}
	return ;
}

// Bureaucrat::GradeTooHighException::GradeTooHighException() {}
// // Bureaucrat::GradeTooHighException::~GradeTooHighException() {}
// Bureaucrat::GradeTooLowException::GradeTooLowException() {}
// // Bureaucrat::GradeTooLowException::~GradeTooLowException() {}
// Bureaucrat::GradeTooHighException::GradeTooHighException(std::string reason) : reason(reason) {}
// Bureaucrat::GradeTooLowException::GradeTooLowException(std::string reason) : reason(reason) {}
// Bureaucrat::GradeTooHighException::GradeTooHighException::what() {return this->reason;}
// Bureaucrat::GradeTooLowException::GradeTooLowException::what() {return this->reason;}


// std::ostream &operator<<(std::ostream &o, Bureaucrat * const & rhs) {
// 	o << (rhs->introduce());
// 	return o;
// }

std::ostream &operator<<(std::ostream &o, Bureaucrat const & rhs) {
	o << (rhs.introduce());
	return o;
}